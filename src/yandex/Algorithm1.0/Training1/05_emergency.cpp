//
// Created by Petr on 09/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getPN(int k1, int m, int k2, int p2, int n2, int x) {
    pair<int, int> res = {-1, -1};
    int p2Test = ((k2 - 1) / x) / m + 1, n2Test = ((k2 - 1) / x) % m + 1;
    if (p2Test == p2 && n2Test == n2) {
        res.first = ((k1 - 1) / x) / m + 1;
        res.second = ((k1 - 1) / x) % m + 1;
    }
    return res;
}

void solve() {
    int P1 = -1, N1 = -1;
    int K1, M, K2, P2, N2;
    cin >> K1 >> M >> K2 >> P2 >> N2;
    for (int x = 1; x < 1e6; x++) {
        pair<int, int> tmp = getPN(K1, M, K2, P2, N2, x);
        if (tmp.first != -1) {
            if (P1 == -1) {
                P1 = tmp.first, N1 = tmp.second;
            } else if (P1 != tmp.first && P1 != 0) {
                P1 = 0;
            } else if (N1 != tmp.second && N1 != 0) {
                N1 = 0;
            }
        }
    }
    cout << P1 << " " << N1 << endl;
}

int main() {
    solve();
}
