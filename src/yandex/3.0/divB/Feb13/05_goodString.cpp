//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, curr, prev = 0;
    long long int ans = 0;
    cin >> n;
    while (n--) {
        cin >> curr;
        ans += min(curr, prev);
        prev = curr;
    }
    cout << ans << endl;
}

int main() {
    solve();
}