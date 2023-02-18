//
// Created by Petr on 18/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

const int N = 5;

void solve() {
    int tmp, mvCnt = 0, c1, c2;
    deque<int> d1, d2;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        d1.push_back(tmp);
    }
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        d2.push_back(tmp);
    }
    while (mvCnt < 1e6 && !d1.empty() && !d2.empty()) {
        c1 = d1.front(), d1.pop_front();
        c2 = d2.front(), d2.pop_front();
        if (c1 == 0 && c2 == 9) {
            d1.push_back(c1);
            d1.push_back(c2);
        } else if (c2 == 0 && c1 == 9) {
            d2.push_back(c1);
            d2.push_back(c2);
        } else if (c1 > c2) {
            d1.push_back(c1);
            d1.push_back(c2);
        } else if (c2 > c1){
            d2.push_back(c1);
            d2.push_back(c2);
        }
        mvCnt++;
    }
    if (d1.empty()) {
        cout << "second " << mvCnt << endl;
    } else if (d2.empty()) {
        cout << "first " << mvCnt << endl;
    } else {
        cout << "botva" << endl;
    }
}

int main() {
    solve();
}