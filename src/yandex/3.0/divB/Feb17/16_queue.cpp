//
// Created by Petr on 18/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int qSize = 0, front = 0;
    string cmd;
    vector<int> q;
    while (true) {
        getline(cin, cmd);
        if (cmd.empty()) break;
        if (cmd.find(' ') != string::npos) {
            q.push_back(stoi(cmd.substr(cmd.find(' '))));
            cout << "ok" << endl;
            qSize++;
        } else if (cmd == "pop") {
            if (qSize > 0) {
                cout << q[front] << endl;
                front++;
                qSize--;
            } else {
                cout << "error" << endl;
            }
        } else if (cmd == "front") {
            if (qSize > 0) {
                cout << q[front] << endl;
            } else {
                cout << "error" << endl;
            }
        } else if (cmd == "size") {
            cout << qSize << endl;
        } else if (cmd == "clear") {
            cout << "ok" << endl;
            q.clear();
            front = 0;
            qSize = 0;
        } else if (cmd == "exit") {
            cout << "bye" << endl;
            return;
        }
    }
}

int main() {
    solve();
}