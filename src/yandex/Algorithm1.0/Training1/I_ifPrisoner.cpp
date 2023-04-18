//
// Created by Petr on 14/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    bool ans = false;
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    if (A <= D && (B <= E || C <= E)) {
        ans = true;
    } else if (A <= E && (B <= D || C <= D)) {
        ans = true;
    } else if (B <= D && (A <= E || C <= E)) {
        ans = true;
    } else if (B <= E && (A <= D || C <= D)) {
        ans = true;
    } else if (C <= D && (A <= E || B <= E)) {
        ans = true;
    } else if (C <= E && (A <= D || B <= D)) {
        ans = true;
    }
    if (ans) { cout << "YES"; } else { cout << "NO"; }
}

int main() {
    solve();
}
