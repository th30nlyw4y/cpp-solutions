//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N, cost;
    stack<pair<int, int>> costIndexes;
    cin >> N;
    vector<int> ans(N, -1);
    for (int i = 0; i < N; i++) {
        cin >> cost;
        while (!costIndexes.empty() && cost < costIndexes.top().second) {
           ans[costIndexes.top().first] = i;
           costIndexes.pop();
        }
        costIndexes.push({i, cost});
    }
    for (int c: ans) {
        cout << c << " ";
    }
}

int main() {
    solve();
}
