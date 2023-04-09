//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

int binarySearchIndex(const vector<int> &v, int n) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (v[m] == n) {
            return m - 1;
        } else if (v[m] > n) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return r;
}

void solve() {
    int N, K, tmp;
    vector<int> diegoStickers;
    unordered_set<int> diegoStickerSet;
    cin >> N;
    if (!N) {
        cout << 0 << endl;
        return;
    }
    while (N--) {
        cin >> tmp;
        if (!diegoStickerSet.contains(tmp)) {
            diegoStickers.push_back(tmp);
            diegoStickerSet.insert(tmp);
        }
    }
    cin >> K;
    if (!K) {
        cout << diegoStickers.size() << endl;
        return;
    }
    sort(diegoStickers.begin(), diegoStickers.end());
    while (K--) {
        cin >> tmp;
        if (tmp <= diegoStickers.front()) {
            cout << 0 << endl;
            continue;
        }
        if (tmp > diegoStickers.back()) {
            cout << diegoStickers.size() << endl;
            continue;
        }
        cout << binarySearchIndex(diegoStickers, tmp) + 1 << endl;
    }
}

int main() {
    solve();
}