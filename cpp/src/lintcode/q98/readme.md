# 98 · 链表排序

中等

## 描述

在 O(nlogn)O(nlogn) 时间复杂度和常数级的空间复杂度下给链表排序。

## 样例

### 样例 1

输入：

    list = 1->3->2->null

输出：

    1->2->3->null

解释：

给链表排序.

### 样例 2

输入：

    list = 1->7->2->6->null

输出：

    1->2->6->7->null

解释：

给链表排序.

## 挑战

分别用归并排序和快速排序做一遍。

## 题解

### 快排

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
        void qsort(ListNode* pre, ListNode* end) {
            if (pre->next == end) {
                return;
            }
            ListNode lhs(0);
            ListNode rhs(0);
            ListNode* lp = &lhs;
            ListNode* rp = &rhs;
            ListNode* b = pre->next;
            listNode* n = b->next;
            while (n != end) {
                if (n->val < b->val) {
                    lp->next = n;
                    lp = n;
                }
                else {
                    rp->next = n;
                    rp = n;
                }
                n = n->next;
            }
            lp->next = b;
            rp->next = end;
            b->next = rhs.next;
            pre->next = lhs.next;
            qsort(pre, b);
            qsort(b, end);
        }
    public:
        /**
        * @param head: The head of linked list.
        * @return: You should return the head of the sorted linked list, using constant space complexity.
        */
        ListNode * sortList(ListNode * head) {
            ListNode pre(0);
            pre->next = head;
            qsort(&pre, nullptr);
            return pre.next;
        }
    };

### 归并

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
        * @param head: The head of linked list.
        * @return: You should return the head of the sorted linked list, using constant space complexity.
        */
        ListNode * sortList(ListNode * head) {
            if (!head) {
                return head;
            }
            
            std::queue<ListNode*> q;
            ListNode* b = head;
            
            while (b) {
                if (b->next) {
                    ListNode* tmp = b->next->next;
                    ListNode* n = b->next;
                    if (b->val > n->val) {
                        b->next = nullptr;
                        n->next = b;
                        q.push(n);
                    }
                    else {
                        n->next = nullptr;
                        q.push(b);
                    }
                    b = tmp;
                }
                else {
                    q.push(b);
                    break;
                }
            }
            
            ListNode tmp(0);
            while (!q.empty()) {
                ListNode* lhs = q.front();
                q.pop();
                if (q.empty()) {
                    return lhs;
                }
                ListNode* rhs = q.front();
                q.pop();
                ListNode* pre = &tmp;
                for (;;) {
                    if (!lhs) {
                        pre->next = rhs;
                        break;
                    }
                    else if (!rhs) {
                        pre->next = lhs;
                        break;
                    }
                    else {
                        if (lhs->val < rhs->val) {
                            pre->next = lhs;
                            lhs = lhs->next;
                            pre = pre->next;
                        }
                        else {
                            pre->next = rhs;
                            rhs = rhs->next;
                            pre = pre->next;
                        }
                    }
                }
                q.push(tmp.next);
            }
        }
    };
