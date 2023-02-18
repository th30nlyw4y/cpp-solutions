//
// Created by Petr on 18/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int deqSize = 0;
    string cmd;
    int front = 0, back = 0;
    vector<int> f, b;
    while (true) {
        getline(cin, cmd);
        if (cmd.empty()) break;
        if (cmd.find(' ') != string::npos) {
            if (cmd.substr(0, cmd.find(' ')) == "push_front") {
                if (front) {
                    b[front] = stoi(cmd.substr(cmd.find(' ')));
                    front--;
                } else {
                    f.push_back(stoi(cmd.substr(cmd.find(' '))));
                }
                cout << "ok" << endl;
                deqSize++;
            } else if (cmd.substr(0, cmd.find(' ')) == "push_back") {
                if (back) {
                    f[back] = stoi(cmd.substr(cmd.find(' ')));
                    back--;
                } else {
                    b.push_back(stoi(cmd.substr(cmd.find(' '))));
                }
                cout << "ok" << endl;
                deqSize++;
            }
        } else if (cmd == "pop_front") {
            if (deqSize) {
                if (f.empty()) {
                    cout << b[front] << endl;
                    front++;
                } else {
                    cout << f.back() << endl;
                    f.pop_back();
                }
                deqSize--;
            } else {
                cout << "error" << endl;
            }
        } else if (cmd == "pop_back") {
            if (deqSize) {
                if (b.empty()) {
                    cout << f[back] << endl;
                    back++;
                } else {
                    cout << b.back() << endl;
                    b.pop_back();
                }
                deqSize--;
            } else {
                cout << "error" << endl;
            }
        } else if (cmd == "front") {
            if (deqSize) {
                if (f.empty()) {
                    cout << b[front] << endl;
                } else {
                    cout << f.back() << endl;
                }
            } else {
                cout << "error" << endl;
            }
        } else if (cmd == "back") {
            if (deqSize) {
                if (b.empty()) {
                    cout << f[back] << endl;
                } else {
                    cout << b.back() << endl;
                }
            } else {
                cout << "error" << endl;
            }
        } else if (cmd == "size") {
            cout << deqSize << endl;
        } else if (cmd == "clear") {
            cout << "ok" << endl;
            f.clear();
            b.clear();
            deqSize = 0;
            front = 0;
            back = 0;
        } else if (cmd == "exit") {
            cout << "bye" << endl;
            return;
        }
    }

}

int main() {
    solve();
}