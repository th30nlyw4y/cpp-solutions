//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int k, l = 0, maxFreq = 0, ans = 0;
    int lCnt[26] = {};
    string s, tmp;
    fstream inputStream("input.txt");
    inputStream >> k;
    while (true){
        tmp = "";
        if (inputStream.eof()) break;
        inputStream >> tmp;
        s += tmp;
    }
    for (int r = 0; r < s.size(); r++) {
        maxFreq = max(maxFreq, ++lCnt[s[r] - 'a']);
        if (r - l + 1 - maxFreq > k) {
            lCnt[s[l] - 'a']--;
            l++;
        }
        ans = r - l + 1;
    }
    cout << ans;
}

int main() {
    solve();
}