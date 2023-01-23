//
// Created by Petr on 19/01/2023.
//
// https://leetcode.com/problems/subarray-sums-divisible-by-k/

#include <vector>

using namespace std;

int subarraysDivByK(vector<int> &nums, int k) {
    int ans = 0, m = 0;
    vector<int> Mods(k);
    Mods[0] = 1;
    for (int num: nums) {
        m = ((m + num) % k + k) % k;
        ans += Mods[m];
        Mods[m]++;
    }
    return ans;
}
