//
// Created by Petr on 09/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    solve();
}
