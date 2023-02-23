//
// Created by Petr on 23/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    stack<int> nums;
    vector<int> minOps(N + 1), indexes(N + 1);
    minOps[1] = 0;
    indexes[1] = 1;
    for (int i = 2; i < N + 1; i++) {
        minOps[i] = minOps[i - 1], indexes[i] = i - 1;
        if (i % 2 == 0 && minOps[i / 2] < minOps[i]) {
            minOps[i] = minOps[i / 2];
            indexes[i] = i / 2;
        }
        if (i % 3 == 0 && minOps[i / 3] < minOps[i]) {
            minOps[i] = minOps[i / 3];
            indexes[i] = i / 3;
        }
        minOps[i]++;
    }
    for (int i = 0, tmp = N; i <= minOps.back(); i++) {
        nums.push(tmp);
        tmp = indexes[tmp];
    }
    cout << minOps.back() << endl;
    while (!nums.empty()) {
        cout << nums.top() << " ";
        nums.pop();
    }
}

int main() {
    solve();
}