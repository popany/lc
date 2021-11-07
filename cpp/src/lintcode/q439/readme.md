# 439 · 线段树的构造 II

算法

中等

通过率

47%

## 描述

线段树是一棵二叉树，他的每个节点包含了两个额外的属性start和end用于表示该节点所代表的区间。start和end都是整数，并按照如下的方式赋值:

- 根节点的 start 和 end 由 build 方法所给出。

- 对于节点 A 的左儿子，有 start=A.left, end=(A.left + A.right) / 2。

- 对于节点 A 的右儿子，有 start=(A.left + A.right) / 2 + 1, end=A.right。

- 如果 start 等于 end, 那么该节点是叶子节点，不再有左右儿子。
对于给定数组实现build方法, 线段树的每个节点储存区间最大值, 返回根节点.

线段树(又称区间树)是一种高级数据结构, 支持一系列区间查询/修改操作.

维基百科: https://zh.wikipedia.org/zh-hans/%E7%B7%9A%E6%AE%B5%E6%A8%B9


## 样例

    输入: [3,2,1,4]
    
    解释: 
    
    这颗线段树将会是
              [0,3](max=4)
              /          \
           [0,1]         [2,3]    
          (max=3)       (max=4)
          /   \          /    \    
       [0,0]  [1,1]    [2,2]  [3,3]
      (max=3)(max=2)  (max=1)(max=4)

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
        SegmentTreeNode* build(int start, int end, vector<int>& A) {
            if (start == end) {
                return new SegmentTreeNode(start, end, A[start]);
            }
            auto lhs = build(start, (start + end) >> 1, A);
            auto rhs = build(((start + end) >> 1) + 1, end, A);
            auto p = new SegmentTreeNode(start, end, lhs->max > rhs->max ? lhs->max : rhs->max);
            p->left = lhs;
            p->right = rhs;
            return p;
        }
    
    public:
        /**
         * @param A: a list of integer
         * @return: The root of Segment Tree
         */
        SegmentTreeNode * build(vector<int> &A) {
            if (A.empty()) {
                return nullptr;
            }
            return build(0, A.size() - 1, A);
        }
    };
    