//
// Created by Petr on 23/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, k;
    cin >> N >> k;
    vector<int> ans(N);
    ans[0] = 1;
    for (int i = 1; i < N; i++) {
        for (int j = 1; j <= k && i - j >= 0; j++) {
            ans[i] += ans[i - j];
        }
    }
    cout << ans.back() << endl;
}

int main() {
    solve();
}