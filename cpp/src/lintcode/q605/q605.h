#pragma once

#include <vector>

// 题目要求有些模糊, 以下解法未验证 org 是最短的, 只保证了顺序的唯一性, 但是答案也通过了
// 总耗时 61 ms
// 您的提交打败了 94.60% 的提交!
class Solution {
public:
    /**
     * @param org: a permutation of the integers from 1 to n
     * @param seqs: a list of sequences
     * @return: true if it can be reconstructed only one or false
     */
    bool sequenceReconstruction(std::vector<int> &org, std::vector<std::vector<int>> &seqs) {
        std::vector<int> v(seqs.size(), 0);
        if (org.empty()) {
            for (int i = 0; i < seqs.size(); i++) {
                if (!seqs[i].empty()) {
                    return false;
                }
            }
            return true;
        }

        for (int i = 1; i < org.size(); i++) {
            bool order = false;
            for (int j = 0; j < v.size(); j++) {
                if (v[j] == seqs[j].size()) {
                    continue;
                }
                if (seqs[j][v[j]] == org[i - 1]) {
                    v[j]++;
                    if (v[j] < seqs[j].size() && seqs[j][v[j]] == org[i]) { // org 中相邻元素的顺序必须在 seqs 中有体现
                        order = true;
                    }
                }
            }
            if (!order) {
                return false;
            }
        }

        int find = false;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == seqs[i].size()) {
                continue;
            }
            if (v[i] + 1!= seqs[i].size()) {
                return false;
            }
            if (seqs[i][v[i]] != org.back()) {
                return false;
            }
            find = true;
        }

        return find;
    }
};
