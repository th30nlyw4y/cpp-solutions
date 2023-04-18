//
// Created by Petr on 09/04/2023.
//

#include <bits/stdc++.h>

using namespace std;

struct Number {
    string code;
    string number;
};

Number getNumber(string s) {
    string tmp = "";
    Number n;
    int i = s.starts_with("+7") ? 2 : s.starts_with("8") ? 1 : 0;
    for (; i < s.length(); i++) {
        if ('0' <= s[i] && s[i] <= '9') {
            tmp += s[i];
        }
    }
    if (tmp.length() == 10) {
        n.code = tmp.substr(0, 3);
        n.number = tmp.substr(3);
    } else if (tmp.length() == 7) {
        n.code = "495";
        n.number = tmp;
    }
    return n;
}

void solve() {
    int N = 3;
    string num, tmp;
    cin >> num;
    Number tmpNum;
    Number nNum = getNumber(num);
    while (N--) {
        cin >> tmp;
        tmpNum = getNumber(tmp);
        if (nNum.code == tmpNum.code && nNum.number == tmpNum.number) { cout << "YES"; } else { cout << "NO"; }
        cout << endl;
    }
}

int main() {
    solve();
}
