# pragma once

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#if 0
// 递归版
// 执行用时：4 ms, 在所有 C++ 提交中击败了 99.88% 的用户
// 内存消耗：20.4 MB, 在所有 C++ 提交中击败了 73.51% 的用户

class Solution {
    int getDepth(TreeNode* t) {
        if (t == nullptr) {
            return 0;
        }
        int ld = getDepth(t->left);
        if (ld < 0) {
            return -1;
        }
        int rd = getDepth(t->right);
        if (rd < 0) {
            return -1;
        }
        if (ld > rd) {
            if (ld - rd > 1) {
                return -1;
            }
            return ld + 1;
            
        } else if (ld < rd) {
            if (rd - ld > 1) {
                return -1;
            }
            return rd + 1;
        }
        return ld + 1;
    }

public:
    bool isBalanced(TreeNode* root) {
        return getDepth(root) >= 0;
    }
};

#else 

// 非递归版
// 执行用时：20 ms, 在所有 C++ 提交中击败了 39.22% 的用户
// 内存消耗：20.8 MB, 在所有 C++ 提交中击败了 23.72% 的用户

#include <stack>

class Solution {

    struct Node
    {
        TreeNode* p;
        int n;  // 已访问子节点数, 0-未访问子节点, 1-已访问左子节点, 2-已访问右子节点
        int lh; // 左节点高度
        int rh; // 右节点高度

        Node(TreeNode* p): p(p), lh(0), rh(0), n(0) {}
    };

public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        std::stack<Node> s;
        s.push(Node{root});
        while (true) {
            if (s.top().n == 0) { // 未访问任何子节点
                s.top().n = 1;
                if (s.top().p->left) {
                    s.push(Node{s.top().p->left});
                }
            } else if (s.top().n == 1) { // 已访问左子节点
                s.top().n = 2;
                if (s.top().p->right) {
                    s.push(Node{s.top().p->right});
                }
            } else if (s.top().n == 2) { // 已访问左子节点与右子节点
                int lh = s.top().lh;
                int rh = s.top().rh;
                int h = 0;
                if (lh > rh) {
                    if (lh - rh > 1) {
                        return false;
                    }
                    h = lh;
                } else if (lh < rh) {
                    if (rh - lh > 1) {
                        return false;
                    }
                    h = rh;
                } else {
                    h = rh;
                }
                s.pop();
                if (s.empty()) {
                    return true;
                }
                if (s.top().n == 1) {
                    s.top().lh = h + 1;
                } else { // s.top().n == 2
                    s.top().rh = h + 1;
                }
            }
        }
    }
};

#endif
