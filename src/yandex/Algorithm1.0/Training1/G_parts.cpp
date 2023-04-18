//
// Created by Petr on 09/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int ans = 0;
    int N, K, M;
    cin >> N >> K >> M;
    while (N >= K && K > M) {
        int cK = N / K;
        N += cK * (K % M - K);
        ans += cK * (K / M);
    }
    cout << ans << endl;
}

int main() {
    solve();
}
