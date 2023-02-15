//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int M, N, start, end;
    queue<pair<int, int>> pairsToDelete;
    set<pair<int, int>> sectorRanges;
    cin >> M;
    cin >> N;
    int ans = N;
    while (N--) {
        cin >> start >> end;
        for (pair<int, int> p: sectorRanges) {
            if (max(p.first, start) <= min(p.second, end)) {
                pairsToDelete.push(p);
                ans--;
            }
        }
        while (!pairsToDelete.empty()) {
            sectorRanges.erase(pairsToDelete.front());
            pairsToDelete.pop();
        }
        sectorRanges.insert({start, end});
    }
    cout << ans << endl;
}

int main() {
    solve();
}