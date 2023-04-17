//
// Created by Petr on 17/04/2023.
//
// https://leetcode.com/problems/trapping-rain-water/

#include <vector>
#include <stack>

using namespace std;

// Two pointers solution
int trapV1(vector<int> &height) {
    int ans = 0, maxL = 0, maxR = 0;
    int l = 0, r = height.size() - 1;
    while (l != r) {
        if (height[l] < height[r]) {
            if (height[l] > maxL) {
                maxL = height[l];
            } else {
                ans += (maxL - height[l]);
            }
            l++;
        } else {
            if (height[r] > maxR) {
                maxR = height[r];
            } else {
                ans += (maxR - height[r]);
            }
            r--;
        }
    }
    return ans;
}

// Stack solution
int trapV2(vector<int> &height) {
    int ans = 0, l = 0;
    stack<int> tmp;
    while (l < height.size()) {
        while (!tmp.empty() && height[l] > height[tmp.top()]) {
            int i = tmp.top();
            tmp.pop();
            if (tmp.empty()) { break; }
            int length = l - tmp.top() - 1, depth = min(height[tmp.top()], height[l]) - height[i];
            ans += (length * depth);
        }
        tmp.push(l);
        l++;
    }

    return ans;
}
