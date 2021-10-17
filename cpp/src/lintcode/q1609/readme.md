# 1609 · 链表的中间结点

算法

简单

通过率

64%

## 描述

给定一个带有头结点 head 的非空单链表，返回链表的中间结点。

如果有两个中间结点，则返回第二个中间结点。

The number of nodes in the given list will be between 1 and 100.

## 样例

### 样例 1

输入：1->2->3->4->5->null

输出：3->4->5->null

### 样例 2

输入：1->2->3->4->5->6->null

输出：4->5->6->null

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
         * @param head: the head node
         * @return: the middle node
         */
        ListNode * middleNode(ListNode * head) {
            ListNode* b = head;
            int n = 0;
            while (b) {
                b = b->next;
                n++;
            }
            n /= 2;
    
            b = head;
            for (int i = 0; i < n; i++) {
                b = b->next;
            }
            return b;
        }
    };
