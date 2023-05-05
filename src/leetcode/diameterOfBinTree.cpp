//
// Created by Petr on 05/05/2023.
//
// https://leetcode.com/problems/diameter-of-binary-tree/

#include "common.h"
#include <cmath>

using namespace std;

int ans = 0;

int dfs(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }

    int lTreeDepth = dfs(root->left);
    int rTreeDepth = dfs(root->right);

    ans = max(ans, lTreeDepth + rTreeDepth);
    return max(lTreeDepth, rTreeDepth) + 1;
}

int diameterOfBinaryTree(TreeNode *root) {
    dfs(root);
    return ans;
}
