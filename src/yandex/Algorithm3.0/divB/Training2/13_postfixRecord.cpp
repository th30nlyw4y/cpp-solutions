//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    fstream inFile("input.txt");
    string s, tmpStr;
    stack<int> nums;
    int tmp;
    while (true) {
        tmpStr = "";
        if (inFile.eof()) break;
        inFile >> tmpStr;
        s += tmpStr;
    }
    for (char c: s) {
        switch (c) {
            case '-':
                tmp = nums.top();
                nums.pop();
                tmp = nums.top() - tmp;
                nums.pop();
                nums.push(tmp);
                break;
            case '+':
                tmp = nums.top();
                nums.pop();
                tmp += nums.top();
                nums.pop();
                nums.push(tmp);
                break;
            case '*':
                tmp = nums.top();
                nums.pop();
                tmp *= nums.top();
                nums.pop();
                nums.push(tmp);
                break;
            case '/':
                tmp = nums.top();
                nums.pop();
                tmp = nums.top() / tmp;
                nums.pop();
                nums.push(tmp);
                break;
            case ' ':
                continue;
            default:
                nums.push(c - '0');
        }
    }
    cout << nums.top() << endl;
}

int main() {
    solve();
}