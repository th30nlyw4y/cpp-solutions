//
// Created by Petr on 17/04/2023.
//
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxCandies = 0;
    vector<bool> ans(candies.size(), false);
    for (int c: candies) {
        if (c > maxCandies) { maxCandies = c; }
    }

    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] + extraCandies >= maxCandies) {
            ans[i] = true;
        }
    }

    return ans;
}
