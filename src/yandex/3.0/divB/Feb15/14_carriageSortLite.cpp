//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, curr = 0, num = 0;
    stack<int> carriages;
    cin >> N;
    cin >> num;
    carriages.push(num);
    for (int i = 1; i < N; i++) {
        cin >> num;
        if (num < carriages.top()) {
            carriages.push(num);
        } else {
            while (!carriages.empty() && carriages.top() - curr == 1 && num > carriages.top()) {
                curr++;
                carriages.pop();
            }
            carriages.push(num);
        }
    }
    while (!carriages.empty() && carriages.top() - curr == 1) {
        curr++;
        carriages.pop();
    }
    if (curr == N) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    solve();
}