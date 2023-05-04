//
// Created by Petr on 04/05/2023.
//
// https://leetcode.com/problems/dota2-senate/

#include <string>
#include <queue>
#include <iostream>

using namespace std;

string predictPartyVictory(string senate) {
    int idx = 0, rCnt = 0, dCnt = 0, left = 0;
    while (senate.size() > 1 && rCnt < senate.size() && dCnt < senate.size()) {
        if (senate[idx] == 'R') {
            if (dCnt > 0) {
                dCnt--;
                
            } else {
                rCnt++;
                senate[left++] = 'R';
            }
        } else {
            if (rCnt > 0) {
                rCnt--;
            } else {
                dCnt++;
                senate[left++] = 'D';
            }
        }
        if (++idx >= senate.size()) {
            senate.resize(left);
            left = 0;
            idx = 0;
        }
    }
    return senate[0] == 'R' ? "Radiant" : "Dire";
}
