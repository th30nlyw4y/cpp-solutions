//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s, tmp;
    long long int freq[26] = {};
    fstream fStream("input.txt");
    while (true) {
        tmp = "";
        if (fStream.eof()) break;
        fStream >> tmp;
        s += tmp;
    }
    for (int i = 0; i < s.size() / 2; i++) {
        freq[s[i] - 'a'] += (s.size() - i) * (i + 1);
        freq[s[s.size() - 1 - i] - 'a'] += (s.size() - i) * (i + 1);
    }
    if (s.size() % 2) {
        int m = s.size() / 2;
        freq[s[m] - 'a'] += (s.size() - m) * (m + 1);
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i]) {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }
}

int main() {
    solve();
}