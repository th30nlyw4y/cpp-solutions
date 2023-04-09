//
// Created by Petr on 18/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void heapSort(vector<int> &s) {
    for (int i = s.size() - 1; i >= 0; i--) {
        int maxNum = s[0];
        s[0] = s[i];
        int index = 0, maxChildIndex;
        while (index * 2 + 1 < i) {
            maxChildIndex = index * 2 + 1;
            if (index * 2 + 2 < i && s[maxChildIndex + 1] > s[maxChildIndex]) maxChildIndex++;
            if (s[maxChildIndex] > s[index]) {
                swap(s[maxChildIndex], s[index]);
                index = maxChildIndex;
            } else {
                break;
            }
        }
        s[i] = maxNum;
    }
}

void heapify(vector<int> &v) {
    int l = v.size();
    for (int i = (l - 2) / 2; i >= 0; i--) {
        int index = i, maxChildIndex;
        while (index * 2 + 1 < l) {
            maxChildIndex = index * 2 + 1;
            if (maxChildIndex + 1 < l && v[maxChildIndex + 1] > v[maxChildIndex]) maxChildIndex++;
            if (v[maxChildIndex] > v[index]) {
                swap(v[maxChildIndex], v[index]);
                index = maxChildIndex;
            } else {
                break;
            }
        }
    }
}

void solve() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    heapify(v);
    heapSort(v);

    for (int num: v) {
        cout << num << " ";
    }
}

int main() {
    solve();
}