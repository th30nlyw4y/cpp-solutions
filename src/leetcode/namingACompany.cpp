//
// Created by Petr on 09/02/2023.
//
// https://leetcode.com/problems/naming-a-company/

#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

long long distinctNames(vector<string> &ideas) {
    long long ans = 0;
    unordered_set<string> groups[26];
    for (string s: ideas) groups[s[0] - 'a'].insert(s.substr(1));
    for (int i = 0; i < 25; i++) {
        for (int j = i + 1; j < 26; j++) {
            int common = 0;
            for (string s: groups[i]) {
                common += groups[j].count(s);
            }
            ans += 2 * ((groups[i].size() - common)*(groups[j].size() - common));
        }
    }
    return ans;
}
