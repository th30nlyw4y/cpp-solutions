//
// Created by Petr on 11/02/2023.
//
// https://leetcode.com/problems/ransom-note/

#include <string>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    if (magazine.size() < ransomNote.size()) return false;
    int magazineLetters[26] = {};
    for (char l: magazine) {
        magazineLetters[l - 'a']++;
    }
    for (char l: ransomNote) {
        if (!magazineLetters[l - 'a']--) return false;
    }
    return true;
}
