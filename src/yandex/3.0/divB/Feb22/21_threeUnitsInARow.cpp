//
// Created by Petr on 23/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> dp(N);
    if (!N) {
        cout << 0 << endl;
        return;
    }
    dp[0] = 2;
    dp[1] = 4;
    dp[2] = 7;
    if (N < 4) {
        cout << dp[N - 1] << endl;
        return;
    }
    for (int i = 3; i < N; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    cout << dp.back() << endl;
}

int main() {
    solve();
}