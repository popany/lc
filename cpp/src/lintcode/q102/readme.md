# 102 · 带环链表

算法

中等

通过率

49%

## 描述

给定一个链表，判断它是否有环。

链表长度不超过10000。

### 样例

#### 样例 1

输入：

    linked list = 21->10->4->5，then tail connects to node index 1(value 10).

输出：

    true

解释：

链表有环。

#### 样例 2

输入：

    linked list = 21->10->4->5->null

输出：

    false

解释：

链表无环。

## 挑战

不要使用额外的空间

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
         * @param head: The first node of linked list.
         * @return: True if it has a cycle, or false
         */
        bool hasCycle(ListNode * head) {
            if (!head) {
                return false;
            }
            ListNode *a = head;
            ListNode *b = head;
    
            while (true) {
                if (!a->next) {
                    return false;
                }
                a = a->next;
                if (!b->next || !b->next->next) {
                    return false;
                }
                b = b->next->next;
                if (a == b) {
                    return true;
                }
            }
        }
    };
