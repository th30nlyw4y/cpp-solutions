//
// Created by Petr on 12/01/2023.
//
// https://leetcode.com/problems/merge-two-binary-trees/

#include "common.h"

TreeNode *mergeTrees(TreeNode *tN1, TreeNode *tN2) {
    if (tN1 == nullptr) return tN2;
    if (tN2 == nullptr) return tN1;
    tN1->val += tN2->val;
    tN1->left = mergeTrees(tN1->left, tN2->left);
    tN1->right = mergeTrees(tN1->right, tN2->right);
    return tN1;
}

