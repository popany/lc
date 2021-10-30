# 428 · x的n次幂

算法

中等

通过率

37%


## 描述

实现 pow(x, n)。(n是一个整数)

不用担心精度，当答案和标准输出差绝对值小于1e-3时都算正确

## 样例

### 样例 1:

    输入: x = 9.88023, n = 3
    输出: 964.498

### 样例 2:

    输入: x = 2.1, n = 3
    输出: 9.261

### 样例 3:

    输入: x = 1, n = 0
    输出: 1

## 挑战

时间复杂度O(logn)O(logn)

## 题解

    class Solution {
    public:
        /**
         * @param x: the base number
         * @param n: the power number
         * @return: the result
         */
        double myPow(double x, int n) {
            unsigned int m;
            if (n < 0) {
                x = 1 / x;
                m = -n;
            }
            else {
                m = n;
            }
            
            double rtn = 1;
            unsigned int p = 1;
            double v = x;
            while (p <= m && p) {
                if (m & p) {
                    rtn *= v;
                }
                
                v *= v;
                p <<= 1;
            }
    
            return rtn;
        }
    };
    