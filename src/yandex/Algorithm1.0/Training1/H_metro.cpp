//
// Created by Petr on 18/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, n, m;
    cin >> a >> b >> n >> m;
    int minA = n + a * (n - 1);
    int maxA = minA + 2 * a;
    int minB = m + b * (m - 1);
    int maxB = minB + 2 * b;
    if (maxA < minB || maxB < minA) {
        cout << -1;
        return;
    }
    cout << max(minA, minB) << " " << min(maxA, maxB);
}

int main() {
    solve();
}
