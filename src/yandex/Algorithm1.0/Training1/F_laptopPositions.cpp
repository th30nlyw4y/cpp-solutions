//
// Created by Petr on 09/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    pair<int, int> res = {2e3, 2e3};
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 + x2) * max(y1, y2) < res.first * res.second) {
        res.first = x1 + x2;
        res.second = max(y1, y2);
    }
    if ((x1 + y2) * max(y1, x2) < res.first * res.second) {
        res.first = x1 + y2;
        res.second = max(y1, x2);
    }
    if ((y1 + x2) * max(x1, y2) < res.first * res.second) {
        res.first = y1 + x2;
        res.second = max(x1, y2);
    }
    if ((y1 + y2) * max(x1, x2) < res.first * res.second) {
        res.first = y1 + y2;
        res.second = max(x1, x2);
    }
    cout << res.first << " " << res.second << endl;
}

int main() {
    solve();
}
