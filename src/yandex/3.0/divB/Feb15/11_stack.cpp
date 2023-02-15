//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string cmd;
    vector<int> stack;
    while (getline(cin, cmd)) {
        if (cmd.empty()) break;
        if (cmd.find(' ') != string::npos) {
            stack.push_back(stoi(cmd.substr(cmd.find(' '))));
            cout << "ok" << endl;
        } else if (cmd == "pop") {
            if (stack.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack.back() << endl;
                stack.pop_back();
            }
        } else if (cmd == "back") {
            if (stack.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack.back() << endl;
            }
        } else if (cmd == "size") {
            cout << stack.size() << endl;
        } else if (cmd == "clear") {
            stack.clear();
            cout << "ok" << endl;
        } else if (cmd == "exit") {
            cout << "bye" << endl;
            return;
        }
        cmd = "";
    }
}

int main() {
    solve();
}