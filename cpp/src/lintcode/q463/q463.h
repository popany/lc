#pragma once

#include <vector>

#if 0
// 冒泡排序
class Solution {

    void swap(int& a, int& b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(std::vector<int> &A) {
        int n = A.size();
        for (int i = 0; i < n; i++) {
            int t = i;
            for (int j = i + 1; j < n; j++) {
                if (A[j] < A[t]) {
                    t = j;
                }
            }
            swap(A[i], A[t]);
        }
    }
};

#else
// 插入排序
class Solution {

    void swap(int& a, int& b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(std::vector<int> &A) {
        int n = A.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j > 0; j--) {
                if (A[j] < A[j - 1]) {
                    swap(A[j], A[j - 1]);
                }
            }
        }
    }
};
#endif