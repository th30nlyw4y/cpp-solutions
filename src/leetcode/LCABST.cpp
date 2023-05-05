//
// Created by Petr on 05/05/2023.
//
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

#include "common.h"

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (root != nullptr && root->val > p->val && root->val > q->val) {
        return lowestCommonAncestor(root->left, p, q);
    }
    if (root != nullptr && root->val < p->val && root->val < q->val) {
        return lowestCommonAncestor(root->right, p, q);
    }
    return root;
}
