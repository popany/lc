# 669 · 换硬币

算法

中等

通过率

41%

## 描述

给出不同面额的硬币以及一个总金额. 写一个方法来计算给出的总金额可以换取的最少的硬币数量. 如果已有硬币的任意组合均无法与总金额面额相等, 那么返回 -1.

你可以假设每种硬币均有无数个

总金额不会超过10000

硬币的种类数不会超过500, 每种硬币的面额不会超过100

## 样例

### 样例1

    输入：

    [1, 2, 5]
    11

    输出： 3

    解释： 11 = 5 + 5 + 1

### 样例2

    输入： 
    [2]
    3
    输出： -1

## 题解

    class Solution {
    public:
        /**
         * @param coins: a list of integer
         * @param amount: a total amount of money amount
         * @return: the fewest number of coins that you need to make up
         */
        int coinChange(vector<int> &coins, int amount) {
            std::vector<int> v(amount + 1, -1);
            v[0] = 0;
            for (int i = 1; i <= amount; i++) {
                int m = 0x7fffffff;
                for (auto c : coins) {
                    if (i >= c && v[i - c] != -1) {
                        m = m > v[i - c] ? v[i - c] : m;
                    }
                }
                v[i] = m != 0x7fffffff ? m + 1 : -1;
            }
            return v[amount];
        }
    };
