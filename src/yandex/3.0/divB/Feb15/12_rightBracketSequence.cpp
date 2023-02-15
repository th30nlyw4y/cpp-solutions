//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string sequence, tmpStr;
    stack<char> tmp;
    unordered_set<char> openingBrackets = {'(', '[', '{'};
    fstream inFile("input.txt");
    while (true) {
        tmpStr = "";
        if (inFile.eof()) break;
        inFile >> tmpStr;
        sequence += tmpStr;
    }
    for (char c: sequence) {
        if (openingBrackets.contains(c)) {
            tmp.push(c);
        } else {
            if (!tmp.empty()) {
                switch (c) {
                    case ')':
                        if (tmp.top() == '(') {
                            tmp.pop();
                            break;
                        } else {
                            cout << "no" << endl;
                            return;
                        }
                    case ']':
                        if (tmp.top() == '[') {
                            tmp.pop();
                            break;
                        } else {
                            cout << "no" << endl;
                            return;
                        }
                    case '}':
                        if (tmp.top() == '{') {
                            tmp.pop();
                            break;
                        } else {
                            cout << "no" << endl;
                            return;
                        }
                }
            } else {
                cout << "no" << endl;
                return;
            }
        }
    }
    if (tmp.empty()) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

int main() {
    solve();
}