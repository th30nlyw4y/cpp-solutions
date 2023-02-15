//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int maxX = -1e9, maxY = -1e9, minX = 1e9, minY = 1e9, K, x, y;
    cin >> K;
    while (K--) {
        cin >> x >> y;
        maxX = max(maxX, x);
        maxY = max(maxY, y);
        minX = min(minX, x);
        minY = min(minY, y);
    }
    cout << minX << " " << minY << " " << maxX << " " << maxY << endl;
}

int main() {
    solve();
}