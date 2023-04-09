//
// Created by Petr on 09/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (sqrt(b) != c) {
            cout << "NO SOLUTION" << endl;
        } else {
            cout << "MANY SOLUTIONS" << endl;
        }
        return;
    }
    if (c < 0) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    if ((c * c - b) % a != 0) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    cout << (c * c - b) / a << endl;
}

int main() {
    solve();
}
