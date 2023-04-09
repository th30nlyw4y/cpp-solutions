//
// Created by Petr on 09/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int tR, tC, res;
    cin >> tR >> tC;
    string mode;
    cin >> mode;
    if (mode == "freeze") {
        res = tR > tC ? tC : tR;
    } else if (mode == "heat") {
        res = tR < tC ? tC : tR;
    } else if (mode == "auto") {
        res = tC;
    } else if (mode == "fan") {
        res = tR;
    }
    cout << res;
}

int main() {
    solve();
}
