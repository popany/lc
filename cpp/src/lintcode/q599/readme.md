# 599 · 向循环有序链表插入节点

算法

中等

通过率 24%

## 描述

给一个来自已经排过序的循环链表的节点，写一个函数来将一个值插入到循环链表中，并且保持还是有序循环链表。给出的节点可以是链表中的任意一个单节点。返回插入后的新链表。

3->5->1 是一个循环链表，所以 3 是 1 的下一个节点。3->5->1 与 5->1->3 相同

## 样例

### 例1

输入:

    3->5->1
    4

输出:

    5->1->3->4

### 例2

输入:

    2->2->2
    3

输出:

    3->2->2->2

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
        * @param node: a list node in the list
        * @param x: An integer
        * @return: the inserted new list node
        */
        ListNode * insert(ListNode * node, int x) {
            if (!node) {
                return new ListNode(x);
            }
            
            if (node->next == node) {
                node->next = new ListNode(x);
                node->next->next = node;
                return node;
            }
            
            ListNode* b = node;
            ListNode* e = node;
            ListNode* tail = nullptr;
            
            if (b->val > x) {
                if (b->val > b->next->val) {
                    tail = b;
                }
                b = b->next;
                while (b != e) {
                    if (b->val <= x) {
                        break;
                    }
                    if (b->val > b->next->val) {
                        tail = b;
                    }
                    b = b->next;
                }

                if (b == e) {
                    ListNode* t = new ListNode(x);
                    t->next = tail->next;
                    tail->next = t;
                    return tail;
                }
            }
            
            while (true) {
                if (b->val > b->next->val || b->next->val >= x) {
                    break;
                }
                b = b->next;
                if (b == e) {
                    break;
                }
            }
            ListNode* t = new ListNode(x);
            t->next = b->next;
            b->next = t;
            return b;
        }
    };
