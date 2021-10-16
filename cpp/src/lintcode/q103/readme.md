# 103 · 带环链表 II

算法

困难

通过率

38%

## 描述

给定一个链表，如果链表中存在环，则返回到链表中环的起始节点，如果没有环，返回null。

## 样例

### 样例 1

输入：

    null，no cycle

输出：

    no cycle

解释:

链表为空，所以没有环存在。

### 样例 2

输入：

    -21->10->4->5，tail connects to node index 1

输出：

    10

解释：

最后一个节点5指向下标为1的节点，也就是10，所以环的入口为10。

## 挑战

不使用额外的空间。

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
         * @return: The node where the cycle begins. if there is no cycle, return null
         */
        ListNode * detectCycle(ListNode * head) {
            if (!head) {
                return nullptr;
            }
            ListNode* a = head;
            ListNode* b = head;
            int n = 0;
            while (true) {
                if (!a->next) {
                    return nullptr;
                }
                a = a->next;
                if (!b->next || !b->next->next) {
                    return nullptr;
                }
                b = b->next->next;
                n++;
                if (a == b) {
                    break;
                }
            }
            if (a == head) {
                return head;
            }
            int c = 0;
            while (true) {
                c++;
                a = a->next;
                b = b->next->next;
                if (b == a) {
                    break;
                }
            }
            ListNode* p = a;
            for (int i = 1; i < c; i++) {
                a = head;
                b = head;
                for (int j = 0; j < i; j++) {
                    b = b->next;
                }
                int t = 0;
                while (true) {
                    t++;
                    a = a->next;
                    b = b->next->next;
                    if (a == b) {
                        break;
                    }
                }
                if (t < n) {
                    t = n;
                    p = a;
                }
            }
            return p;
        }
    };
    