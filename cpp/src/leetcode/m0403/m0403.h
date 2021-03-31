#pragma once

#include <vector>
#include <queue>

 // Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Definition for singly-linked list.
struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(nullptr) {}
};


// 执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
// 内存消耗：8 MB, 在所有 C++ 提交中击败了53.11%的用户

class Solution {
public:
    std::vector<ListNode*> listOfDepth(TreeNode* tree) {
        std::vector<ListNode*> r;
        if (tree == nullptr) {
            return r;
        }

        std::queue<TreeNode*> q;
        q.push(tree);
        while (!q.empty()) {
            ListNode* head = nullptr;
            ListNode* curr = nullptr;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* t = q.front();
                if (head == nullptr) {
                    head = new ListNode(t->val);
                    curr = head;
                } else {
                    curr->next = new ListNode(t->val);
                    curr = curr->next;
                }
                if (t->left) {
                    q.push(t->left);
                }
                if (t->right) {
                    q.push(t->right);
                }
                q.pop();
            }
            r.push_back(head);
        }
        return r;
    }
};
