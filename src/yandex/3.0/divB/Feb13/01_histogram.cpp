//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int freq[90] = {}, topFreq = 0;
    unordered_set<char> allowedSymbols = {
            '.', '!', '?', ':', '-', ',', ';', '(', ')',
            '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
            'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };
    vector<int> letterIndexes;
    string text, tmp;
    fstream fStream("input.txt");
    while (true) {
        tmp = "";
        if (fStream.eof()) break;
        fStream >> tmp;
        text += tmp;
    }
    for (char c: text) {
        if (allowedSymbols.count(c)) topFreq = max(topFreq, ++freq[c - '!']);
    }
    for (int i = 0; i < 90; i++) {
        if (freq[i]) letterIndexes.push_back(i);
    }
    while (topFreq) {
        tmp = "";
        for (int letterIndex: letterIndexes) {
            if (freq[letterIndex] == topFreq) {
                tmp += "#";
                freq[letterIndex]--;
            } else {
                tmp += " ";
            }
        }
        cout << tmp << endl;
        topFreq--;
    }
    for (int index: letterIndexes) {
        cout << char(index + '!');
    }
}

int main() {
    solve();
}