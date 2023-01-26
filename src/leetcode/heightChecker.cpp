//
// Created by Petr on 26/01/2023.
//
// https://leetcode.com/problems/height-checker/

#include <vector>
#include <algorithm>

using namespace std;


// 1st solution
int heightCheckerV1(vector<int> &heights) {
    int ans = 0;
    vector<int> expected(heights);
    sort(expected.begin(), expected.end());
    for (int i = 0; i < heights.size(); i++) if (heights[i] != expected[i]) ans++;
    return ans;
}

// 2nd solution
int heightCheckerV2(vector<int> &heights) {
    int ans = 0, currHeight = 0, freq[101] = {};
    for (int h: heights) freq[h]++;
    for (int h: heights) {
        while (!freq[currHeight]) currHeight++;
        if (currHeight != h) ans++;
        freq[currHeight]--;
    }
    return ans;
}
