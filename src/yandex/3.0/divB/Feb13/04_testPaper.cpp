//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, K, pRow, pPos;
    cin >> N >> K >> pRow >> pPos;
    int pNum = (pRow - 1) * 2 + pPos;
    int bRow = (pNum + K) / 2 + (pNum + K) % 2;
    int bPos = (pNum + K) % 2 ? 1 : 2;
    int fRow = (pNum - K) / 2 + (pNum - K) % 2;
    int fPos = (pNum - K) % 2 ? 1 : 2;
    if ((bRow - 1) * 2 + bPos <= N && bRow - pRow <= pRow - fRow) {
        cout << bRow << " " << bPos << endl;
    } else if (fRow > 0) {
        cout << fRow << " " << fPos << endl;
    } else {
        cout << -1 << endl;
    }
    return;
}

int main() {
    solve();
}