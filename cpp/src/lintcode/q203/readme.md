# 203 · 线段树的修改

算法

中等

通过率

45%

## 描述

对于一棵 最大线段树, 每个节点包含一个额外的 max 属性，用于存储该节点所代表区间的最大值。

设计一个 modify 的方法，接受三个参数 root、 index 和 value。该方法将 root 为根的线段树中 [start, end] = [index, index] 的节点修改为新的 value ，并确保在修改后，线段树的每个节点的 max 属性仍然具有正确的值。

在做此题前，最好先完成线段树的构造和 线段树查询这两道题目。

## 样例

### 样例 1

    输入："[1,4,max=3][1,2,max=2][3,4,max=3][1,1,max=2][2,2,max=1][3,3,max=0][4,4,max=3]",2,4
    输出："[1,4,max=4][1,2,max=4][3,4,max=3][1,1,max=2][2,2,max=4][3,3,max=0][4,4,max=3]"
    解释：
    线段树:
    
                              [1, 4, max=3]
                            /                \
                [1, 2, max=2]                [3, 4, max=3]
               /              \             /             \
        [1, 1, max=2], [2, 2, max=1], [3, 3, max=0], [4, 4, max=3]
    
    如何调用modify(root, 2, 4), 可以得到:
    
                              [1, 4, max=4]
                            /                \
                [1, 2, max=4]                [3, 4, max=3]
               /              \             /             \
        [1, 1, max=2], [2, 2, max=4], [3, 3, max=0], [4, 4, max=3]

## 样例 2

    输入："[1,4,max=3][1,2,max=2][3,4,max=3][1,1,max=2][2,2,max=1][3,3,max=0][4,4,max=3]",4,0
    输出："[1,4,max=4][1,2,max=4][3,4,max=0][1,1,max=2][2,2,max=4][3,3,max=0][4,4,max=0]"
    解释：
    线段树:
    
                              [1, 4, max=3]
                            /                \
                [1, 2, max=2]                [3, 4, max=3]
               /              \             /             \
        [1, 1, max=2], [2, 2, max=1], [3, 3, max=0], [4, 4, max=3]
    如果调用modify(root, 4, 0), 可以得到:
        
                              [1, 4, max=2]
                            /                \
                [1, 2, max=2]                [3, 4, max=0]
               /              \             /             \
        [1, 1, max=2], [2, 2, max=1], [3, 3, max=0], [4, 4, max=0]

## 挑战

时间复杂度 O(h) , h 是线段树的高度

## 题解

    /**
     * Definition of SegmentTreeNode:
     * class SegmentTreeNode {
     * public:
     *     int start, end, max;
     *     SegmentTreeNode *left, *right;
     *     SegmentTreeNode(int start, int end, int max) {
     *         this->start = start;
     *         this->end = end;
     *         this->max = max;
     *         this->left = this->right = NULL;
     *     }
     * }
     */
    
    class Solution {
        int mod(SegmentTreeNode* p, int index, int value)
        {
            if (p->start <= index && p->end >= index) {
                if (p->start == p->end) {
                    return p->max = value;
                }
                int lhs = mod(p->left, index, value);
                int rhs = mod(p->right, index, value);
                p->max = lhs > rhs ? lhs : rhs;
            }
            return p->max;
        }
    
    public:
        /**
         * @param root: The root of segment tree.
         * @param index: index.
         * @param value: value
         * @return: nothing
         */
        void modify(SegmentTreeNode * root, int index, int value) {
            if (!root) {
                return;
            }
            mod(root, index, value);
        }
    };
