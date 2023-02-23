//
// Created by Petr on 23/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> nails(N), dp(N);
    for (int i = 0; i < N; i++) {
        cin >> nails[i];
    }
    sort(nails.begin(), nails.end());
    dp[1] = nails[1] - nails[0];
    if (N > 1) { dp[2] = nails[2] - nails[0]; }
    else {
        cout << dp[0] << endl;
        return;
    }
    for (int i = 3; i < N; i++) {
        dp[i] = min(dp[i - 2], dp[i - 1]) + nails[i] - nails[i - 1];
    }
    cout << dp.back() << endl;
}

int main() {
    solve();
}