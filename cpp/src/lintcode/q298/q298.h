#pragma once

#include <vector>

class Solution {
public:
    /**
     * @param n: an integer
     * @return: return all prime numbers within n.
     */
    std::vector<int> prime(int n) {
        std::vector<int> v;
        if (n < 2) {
            return v;
        }
        v.push_back(2);
        for (int i = 3; i <= n; i++) {
            int m = i / 2;
            int j = 0;
            for (; v[j] <= m; j++) {
                if ((i / v[j]) * v[j] == i) {
                    break;
                }
            }
            if (v[j] > m) {
                v.push_back(i);
            }
        }
        return v;
    }
};
