//
// Created by Petr on 11/02/2023.
//
// https://leetcode.com/problems/fizz-buzz/

#include <string>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> ans;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            if (i % 5 == 0) {
                ans.push_back("FizzBuzz");
            } else {
                ans.push_back("Fizz");
            }
        } else if (i % 5 == 0) {
            ans.push_back("Buzz");
        } else {
            ans.push_back(to_string(i));
        }
    }
    return ans;
}
