# 247 · 线段树查询 II

算法

中等

通过率

32%

## 描述

对于一个数组，我们可以对其建立一棵 线段树, 每个结点存储一个额外的值 count 来代表这个结点所指代的数组区间内的元素个数. (数组中的某些位置可能没有元素)

实现一个 query 的方法，该方法接受三个参数 root, start 和 end, 分别代表线段树的根节点和需要查询的区间，找到数组中在区间[start, end]内的元素个数。

为了能更好地理解这道题，你最好先完成线段树的构造和线段树的查询

## 样例

### 样例 1

    输入："[0,3,count=3][0,1,count=1][2,3,count=2][0,0,count=1][1,1,count=0][2,2,count=1][3,3,count=1]",[[1, 1], [1, 2], [2, 3], [0, 2]]
    输出：[0,1,2,2]
    解释：
    对应的线段树为：
    
                             [0, 3, count=3]
                             /             \
                  [0,1,count=1]             [2,3,count=2]
                  /         \               /            \
           [0,0,count=1] [1,1,count=0] [2,2,count=1], [3,3,count=1]
    
    Input : query(1,1), Output: 0
    
    Input : query(1,2), Output: 1
    
    Input : query(2,3), Output: 2
    
    Input : query(0,2), Output: 2

### 样例 2

    输入："[0,3,count=3][0,1,count=1][2,3,count=2][0,0,count=1][1,1,count=0][2,2,count=0][3,3,count=1]",[[1, 1], [1, 2], [2, 3], [0, 2]]
    输出：[0,0,1,1]
    解释：
    对应的线段树为：
    
                             [0, 3, count=2]
                             /             \
                  [0,1,count=1]             [2,3,count=1]
                  /         \               /            \
           [0,0,count=1] [1,1,count=0] [2,2,count=0], [3,3,count=1]
    
    Input : query(1,1), Output: 0
    
    Input : query(1,2), Output: 0
    
    Input : query(2,3), Output: 1
    
    Input : query(0,2), Output: 1

## 题解

    /**
     * Definition of SegmentTreeNode:
     * class SegmentTreeNode {
     * public:
     *     int start, end, count;
     *     SegmentTreeNode *left, *right;
     *     SegmentTreeNode(int start, int end, int count) {
     *         this->start = start;
     *         this->end = end;
     *         this->count = count;
     *         this->left = this->right = NULL;
     *     }
     * }
     */
    
    
    class Solution {
    public:
        /*
         * @param root: The root of segment tree.
         * @param start: start value.
         * @param end: end value.
         * @return: The count number in the interval [start, end]
         */
        int query(SegmentTreeNode * root, int start, int end) {
            if (!root || root->start > end || root->end < start) {
                return 0;
            }
            
            if (root->start >= start && root->end <= end) {
                return root->count;
            }
            return query(root->left, start, end) + query(root->right, start, end);
        }
    };
