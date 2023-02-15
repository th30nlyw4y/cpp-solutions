//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, M, K, curr, rSum, ans;
    cin >> N >> M >> K;
    vector<vector<int>> prefixSums(N);
    for (int i = 0; i < N; i++) {
        rSum = 0;
        for (int j = 0; j < M; j++) {
            cin >> curr;
            prefixSums[i].push_back(curr + rSum);
            rSum += curr;
        }
    }
    int x1, y1, x2, y2;
    while (K--) {
        ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1 - 1; i < x2; i++) {
            if (y1 > 1){
                ans += (prefixSums[i][y2 - 1] - prefixSums[i][y1 - 2]);
            } else {
                ans += prefixSums[i][y2 - 1];
            }
        }
        cout << ans << endl;
    }
}

int main() {
    solve();
}