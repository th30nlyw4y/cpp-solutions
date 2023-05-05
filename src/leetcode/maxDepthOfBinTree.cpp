//
// Created by Petr on 05/05/2023.
//
// https://leetcode.com/problems/diameter-of-binary-tree/

#include "common.h"
#include <cmath>

using namespace std;

int maxDepth(TreeNode *root) {
    if (root == nullptr) { return 0; }
    int lTreeDepth = maxDepth(root->left);
    int rTreeDepth = maxDepth(root->right);
    return max(lTreeDepth, rTreeDepth) + 1;
}
