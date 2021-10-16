# 380 · 两个链表的交叉

算法

中等

通过率

46%

## 描述

请写一个程序，找到两个单链表最开始的交叉节点。

如果两个链表没有交叉，返回null。

在返回结果后，两个链表仍须保持原有的结构。

可假定整个链表结构中没有循环。

## 样例

### 样例 1

输入：

    A:          a1 → a2
                       ↘
                         c1 → c2 → c3
                       ↗            
    B:     b1 → b2 → b3

输出：c1

解释：在节点 c1 开始交叉。

### 样例 2

输入:

    Intersected at 6
    1->2->3->4->5->6->7->8->9->10->11->12->13->null
    6->7->8->9->10->11->12->13->null

输出:

    Intersected at 6

解释：

begin to intersect at node 6.

## 挑战

需满足 O(n) 时间复杂度，且仅用 O(1) 内存。

## 题解

    /**
     * Definition of singly-linked-list:
     * class ListNode {
     * public:
     *     int val;
     *     ListNode *next;
     *     ListNode(int val) {
     *        this->val = val;
     *        this->next = NULL;
     *     }
     * }
     */
    
    class Solution {
    public:
        /**
         * @param headA: the first list
         * @param headB: the second list
         * @return: a ListNode
         */
        ListNode * getIntersectionNode(ListNode * headA, ListNode * headB) {
            int na = 0;
            int nb = 0;
    
            for (ListNode* b = headA; b != nullptr; b = b->next) {
                na++;
            }
    
            for (ListNode* b = headB; b != nullptr; b = b->next) {
                nb++;
            }
    
            ListNode* ba = headA;
            ListNode* bb = headB;
            if (na > nb) {
                for (int i = 0; i < na - nb; i++) {
                    ba = ba->next;
                }
            }
            if (na < nb) {
                for (int i = 0; i < nb - na; i++) {
                    bb = bb->next;
                }
            }
            while (true) {
                if (ba == bb) {
                    return ba;
                }
                ba = ba->next;
                bb = bb->next;
            }
    
        }
    };
    