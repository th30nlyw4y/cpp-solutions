//
// Created by Petr on 31/01/2023.
//
// https://leetcode.com/problems/best-team-with-no-conflicts/

#include <vector>
#include <algorithm>

using namespace std;

int bestTeamScore(vector<int> &scores, vector<int> &ages) {
    int ans = 0, scoresSize = scores.size();
    vector<int> dp(scoresSize);
    vector<pair<int, int>> agesAndScores;

    for (int i = 0; i < scoresSize; i++) {
        agesAndScores.push_back({ages[i], scores[i]});
    }
    sort(agesAndScores.begin(), agesAndScores.end());

    for (int i = 0; i < scoresSize; i++) {
        int score = agesAndScores[i].second;
        dp[i] = score;
        for (int j = i - 1; j >= 0; j--) {
            if (score >= agesAndScores[j].second) {
                dp[i] = max(dp[i], dp[j] + score);
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}
