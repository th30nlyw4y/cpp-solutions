//
// Created by Petr on 18/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

struct Heap {
private:
    vector<int> s;

public:
    void push(int v) {
        s.push_back(v);
        int index = s.size() - 1;
        while (index > 0 && s[index] > s[(index - 1) / 2]) {
            swap(s[index], s[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    int pop() {
        int ans = s[0];
        s[0] = s.back();
        int index = 0, maxChildIndex;
        while (index * 2 + 2 < s.size()) {
            maxChildIndex = index * 2 + 2;
            if (s[maxChildIndex - 1] > s[maxChildIndex]) maxChildIndex--;
            if (s[maxChildIndex] > s[index]) {
                swap(s[maxChildIndex], s[index]);
                index = maxChildIndex;
            } else {
                break;
            }
        }
        s.pop_back();
        return ans;
    }
};


void solve() {
    int N;
    string cmd;
    Heap h;
    cin >> N;
    cin.ignore();
    while (N--) {
        getline(cin, cmd);
        if (cmd[0] == '0') {
            h.push(stoi(cmd.substr(2)));
        } else if (cmd[0] == '1') {
            cout << h.pop() << endl;
        }
    }
}

int main() {
    solve();
}