# 751 · 约翰的生意

算法

中等

通过率

43%

## 描述

在一条数轴上，有n个城市，编号从0 ~ n – 1 , 约翰打算在这n个城市做点生意，他对Armani的一批货物感兴趣，每个城市对于这批货物都有一个价格prices[i]。对于城市x,约翰可从城市编号为[x - k, x + k]购买货物，然后卖到城市x,问约翰在每个城市最多能赚到多少钱？

prices.length 范围为[2, 100000], k <= 100000。

## 样例

### 样例1

    输入: prices = [1, 3, 2, 1, 5] 和 k = 2
    输出: [0, 2, 1, 0, 4]
    解释:
    i = 0，约翰可去的城市有0~2因为1、2号城市的价格比0号城市的价格高，所以赚不了钱，即 ans[0] = 0。
    i = 1，可去的城市有0~3，可以从0号或者3号城市购买货物赚取的差价最大，即ans[1] = 2。
    i = 2，可去的城市有0~4，显然从3号城市购买货物赚取的差价最大，即ans[2] = 1。
    i = 3，可去的城市有1~4，没有其他城市的价格比3号城市价格低，所以赚不了钱，ans[3] = 0。
    i = 4，可去的城市有2~4，从3号城市购买货物赚取的差价最大，即ans[4] = 4。

### 样例2

    输入: prices = [1, 1, 1, 1, 1] 和 k = 1
    输出: [0, 0, 0, 0, 0]
    解释:
    所有城市价格都一样，所以不能赚到钱，即所有的ans都为0

## 题解

    class Solution {
        struct Node
        {
            int min;
            int b;
            int e;
            Node* left;
            Node* right;
    
            Node(int b, int e, int min):
                b(b),
                e(e),
                min(min),
                left(nullptr),
                right(nullptr)
            {}
        };
    
        Node* build(int b, int e, const vector<int>& A) {
            if (b == e) {
                return new Node(b, e, A[b]);
            }
            auto lhs = build(b, (b + e) >> 1, A);
            auto rhs = build(((b + e) >> 1) + 1, e, A);
            auto p = new Node(b, e, lhs->min < rhs->min ? lhs->min : rhs->min);
            p->left = lhs;
            p->right = rhs;
            return p;
        }
    
        int min(int b, int e, Node* p) {
            if (!p || b > p->e || e < p->b) {
                return 0x7fffffff;
            }
            if (b <= p->b && e >= p->e) {
                return p->min;
            }
            int lhs = min(b, e, p->left);
            int rhs = min(b, e, p->right);
            return lhs < rhs ? lhs : rhs;
        }
    
    public:
        /**
         * @param A: The prices [i]
         * @param k: 
         * @return: The ans array
         */
        vector<int> business(vector<int> &A, int k) {
            auto p = build(0, A.size() - 1, A);
            vector<int> v;
            for (int i = 0; i < A.size(); ++i) {
                int m = min(i - k, i + k, p);
                v.push_back(m < A[i] ? A[i] - m : 0);
            }
            return v;
        }
    };
