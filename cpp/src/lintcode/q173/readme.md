# [173 · 链表插入排序](https://www.lintcode.com/problem/173/description)

简单

## 描述

用插入排序对链表排序

## 样例

样例 1:
	输入: 0->null
	输出: 0->null


样例 2:
	输入:  1->3->2->0->null
	输出 :0->1->2->3->null

## 解题

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
        * @param head: The first node of linked list.
        * @return: The head of linked list.
        */
        ListNode * insertionSortList(ListNode * head) {
            if (!head) {
                return head;
            }

            ListNode tmp;
            tmp.next = head;
            ListNode* p = head;

            while (p->next) {
                ListNode* pre = &tmp;
                while (pre->next->val < p->next->val) {
                    pre = pre->next;
                }
                if (pre == p) {
                    p = p->next;
                }
                else {
                    ListNode* n = p->next;
                    p->next = n->next;
                    n->next = pre->next;
                    pre->next = n;
                }
            }
            return tmp.next;
        }
    };
