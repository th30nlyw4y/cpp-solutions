//
// Created by Petr on 14/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    float x, y;
    float a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) {
        cout << 5;
    } else if ((a == 0 && b == 0 && e != 0) || (c == 0 && d == 0 && f != 0) ||
               (a / c == b / d && a / c != e / f && !(e == 0 && f == 0) ||
                (b == 0 && d == 0 && e / a != f / c && a != 0 && c != 0) ||
                (a == 0 && c == 0 && e / b != f / d && b != 0 && d != 0))) {
        cout << 0;
    } else if (a / c == b / d) {
        cout << 1 << " ";
        if (a == 0) {
            cout << c / d * (-1) << " " << f / d;
        } else {
            cout << a / b * (-1) << " " << e / b;
        }
    } else if (b == 0 && d == 0) {
        cout << 3 << " ";
        if (a == 0) {
            cout << f / c;
        } else {
            cout << e / a;
        }
    } else if (a == 0 && c == 0) {
        cout << 4 << " ";
        if (b == 0) {
            cout << f / d;
        } else {
            cout << e / b;
        }
    } else {
        if (a == 0) {
            x = (b * f - d * e) / (b * c - a * d);
            y = (e - a * x) / b;
        } else {
            y = (a * f - c * e) / (a * d - b * c);
            x = (e - b * y) / a;
        }
        cout << 2 << " " << x << " " << y;
    }
}

int main() {
    solve();
}