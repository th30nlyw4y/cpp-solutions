//
// Created by Petr on 23/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N), dp(N);
    cin >> A[0] >> B[0] >> C[0];
    dp[0] = min(min(A[0], B[0]), C[0]);
    for (int i = 1; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i];
        switch (i) {
            case 1:
                dp[i] = min(dp[i - 1] + A[i], B[i - 1]);
                break;
            case 2:
                dp[i] = min(min(dp[i - 1] + A[i], dp[i - 2] + B[i - 1]), C[i - 2]);
                break;
            default:
                dp[i] = min(min(dp[i - 1] + A[i], dp[i - 2] + B[i - 1]), dp[i - 3] + C[i - 2]);
        }
    }
    cout << dp.back() << endl;
}

int main() {
    solve();
}