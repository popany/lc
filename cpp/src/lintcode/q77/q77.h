#pragma once

#include <string>
#include <vector>
#include <map>

#if 0
// 总耗时 182 ms
// 您的提交打败了 1.00% 的提交!
class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: The length of longest common subsequence of A and B
     */
    int longestCommonSubsequence(std::string &A, std::string &B) {
        const std::string& a = A.size() < B.size() ? A : B;
        const std::string& b = A.size() < B.size() ? B : A;
        std::vector<std::map<int, int>> v(a.size());
        for (int i = 0; i < a.size(); i++) {
            std::vector<int> t;
            for (int j = 0; j < b.size(); j++) {
                if (a[i] == b[j]) {
                    t.push_back(j);
                }
            }
            for (int j = i - 1; j >= 0; j--) { // 从后向前遍历 v
                int k = 0;
                std::map<int, int> m;
                for (auto it = v[j].begin(); it != v[j].end(); it++) { // v[j] 为 map, 表示 a[:i+1] 与 b 的子序列(长度为 j+1)在 b 中跨越的区间(左闭右闭). map 的键代表区间左边界, 值代表区间右边界. 若区间 x 覆盖区间 y, 则删除区间 x
                    for (; k < t.size() && t[k] <= it->second; k++) {} // v[j + 1] 中新增的区间由 v[j] 与 t 共同决定
                    if (k == t.size()) {
                        break;
                    }
                    m[it->first] = t[k];
                }
                auto mit = m.begin();
                for (auto it = v[j + 1].begin(); mit != m.end() && it != v[j + 1].end(); ) { // 删除覆盖区间
                    if (it->first < mit->first) {
                        if (it->second >= mit->second) {
                            it = v[j + 1].erase(it);
                        } else {
                            it++;
                        }
                    }
                    else {
                        if (mit->second >= it->second) {
                            mit = m.erase(mit);
                        } else {
                            mit++;
                        }
                    }
                }
                mit = m.begin();
                for (; mit != m.end(); mit++) {
                    v[j + 1][mit->first] = mit->second;
                }
            }
            for (int j = 0; j < t.size(); j++) {
                v[0][t[j]] = t[j];
            }
        }
        for (int i = v.size(); i-- > 0; ) {
            if (!v[i].empty()) {
                return i + 1;
            }
        }
        return 0;
    }
};

#else 

// 分析上面解法, 其实不必存储区间信息, 对于每一 v[j], 只需维护一个最小的右边界即可
// 总耗时 40 ms
// 您的提交打败了 97.60% 的提交!

class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: The length of longest common subsequence of A and B
     */
    int longestCommonSubsequence(std::string &A, std::string &B) {
        const std::string& a = A.size() < B.size() ? A : B;
        const std::string& b = A.size() < B.size() ? B : A;

        std::vector<int> v(a.size(), b.size());
        int vn = 0; // v 实际使用数
        for (int i = 0; i < a.size(); i++) {
            std::vector<int> t;
            for (int j = 0; j < b.size(); j++) {
                if (a[i] == b[j]) {
                    t.push_back(j);
                }
            }
            if (t.empty()) {
                continue;
            }

            for (int j = vn; j > 0; j--) {
                for (int k = 0; k < t.size(); k++) {
                    if (v[j - 1] < t[k]) {
                        if (v[j] > t[k]) {
                            v[j] = t[k];
                            if (j == vn) {
                                vn++;
                            }
                        }
                        break;
                    }
                }
            }

            if (v[0] > t[0]) {
                v[0] = t[0];
                if (vn == 0) {
                    vn = 1;
                }
            }
        }
        return vn;
    }
};

#endif