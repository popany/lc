# 464 · 整数排序 II

算法

简单

通过率

42%

## 描述

给一组整数，请将其在原地按照升序排序。使用归并排序，快速排序，堆排序或者任何其他 O(n log n) 的排序算法。

## 样例

### 例1：

    输入：[3,2,1,4,5]，
    输出：[1,2,3,4,5]。

### 例2：

    输入：[2,3,1]，
    输出：[1,2,3]。

## 题解

### qsort

    class Solution {
        void qsort(int* b, int* e) {
            if (b == e) {
                return;
            }
            int* ob = b;
            int* oe = e;
            
            int s = e[-1];
            --e;
            while (b < e) {
                if (*b <= s) {
                    b++;
                    continue;
                }
                if (*b > s) {
                    int t = *b;
                    *b = e[-1];
                    --e;
                    *e = t;
                }
            }
            int t = *e;
            *e = s;
            oe[-1] = t;
            qsort(ob, e);
            qsort(e + 1, oe);
        }
    public:
        /**
         * @param A: an integer array
         * @return: nothing
         */
        void sortIntegers2(vector<int> &A) {
            qsort(&A[0], &A[0] + A.size());
        }
    };

### heap sort

    class Solution {
    public:
        /**
         * @param A: an integer array
         * @return: nothing
         */
        void sortIntegers2(vector<int> &A) {
            if (A.empty()) {
                return;
            }
            int* b = &A[0];
            for (int i = 1; i < A.size(); i++) {
                int c = i;
                while (true) {
                    int p = ((c + 1) >> 1) - 1;
                    if (b[p] >= b[c]) {
                        break;
                    }
                    int tmp = b[p];
                    b[p] = b[c];
                    b[c] = tmp;
                    c = p;
                    if (c == 0) {
                        break;
                    }
                }
            }
    
            int* e = b + A.size() - 1;
            while (e > b) {
                int tmp = *e;
                *e = *b;
                *b = tmp;
    
                int p = 1;
                while (true) {
                    int lc = (p << 1);
                    if (b + lc > e) {
                        break;
                    }
                    int rc = lc + 1;
                    int c = b + rc > e ? lc : (b[lc - 1] > b[rc - 1] ? lc : rc);
                    if (b[c - 1] <= b[p - 1]) {
                        break;
                    }
                    int tmp = b[c - 1];
                    b[c - 1] = b[p - 1];
                    b[p - 1] = tmp;
                    p = c;
                }
                --e;
            }
        }
    };

### merge sort top down

    class Solution {
        void merge(int* b, int* e, int* buf) {
            if (b + 1 >= e) {
                return;
            }
    
            int* m = b + ((e - b) >> 1);
            merge(b, m, buf);
            merge(m, e, buf);
            
            for (int i = 0; i < e - m; i++) {
                buf[i] = m[i];
            }
            
            int* b2 = buf;
            int* e2 = buf + (e - m);
            while (b < m && b2 < e2) {
                --e;
                if (m[-1] < e2[-1]) {
                    --e2;
                    *e = *e2;
                }
                else {
                    --m;
                    *e = *m;
                }
            }
            while (b < m) {
                --e;
                --m;
                *e = *m;
            }
            while (b2 < e2) {
                --e;
                --e2;
                *e = *e2;
            }
        }
    
    public:
        /**
         * @param A: an integer array
         * @return: nothing
         */
        void sortIntegers2(vector<int> &A) {
            std::vector<int> buf((A.size() >> 1) + 1);
            merge(&A[0], &A[0] + A.size(), &buf[0]);
        }
    };

### merge sort bottom up

    class Solution {
    
        void merge(int* b, int* m, int* e, int* buf) {
            for (int i = 0; i < m - b; i++) {
                buf[i] = b[i];
            }
            
            int* b1 = m;
            int* e1 = e;
            int* b2 = buf;
            int* e2 = buf + (m - b);
            while (b1 < e1 && b2 < e2) {
                if (*b1 < *b2) {
                    *b = *b1;
                    ++b1;
                }
                else {
                    *b = *b2;
                    ++b2;
                }
                ++b;
            }
            while (b1 < e1) {
                *b = *b1;
                ++b;
                ++b1;
            }
            while (b2 < e2) {
                *b = *b2;
                ++b;
                ++b2;
            }
        }
    
    public:
        /**
         * @param A: an integer array
         * @return: nothing
         */
        void sortIntegers2(vector<int> &A) {
            std::vector<int> buf((A.size() >> 1) + 1);
            int n = A.size();
            int* b = &A[0];
            int x = 1;
            while (x < n) {
                x <<= 1;
                if (!(x & n)) {
                    continue;
                }
                int s = 1;
                int* p = b + (n & (x - 1));
                while (s < x) {
                    s <<= 1;
                    for (int i = 0; i < x; i += s) {
                        merge(p + i, p + i + (s >> 1), p + i + s, &buf[0]);
                    }
                }
                merge(b, p, p + x, &buf[0]);
            }
        }
    };
