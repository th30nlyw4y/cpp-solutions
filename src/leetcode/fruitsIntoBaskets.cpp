//
// Created by Petr on 07/02/2023.
//
// https://leetcode.com/problems/fruit-into-baskets/

#include <vector>
#include <unordered_map>

using namespace std;

int totalFruit(vector<int> &fruits) {
    int l = 0, r = 0;
    unordered_map<int, int> fruitBasket;
    while (r < fruits.size()) {
        fruitBasket[fruits[r]]++;
        if (fruitBasket.size() > 2) {
            if (fruitBasket[fruits[l]] - 1) { fruitBasket[fruits[l]]--; } else { fruitBasket.erase(fruits[l]); }
            l++;
        }
        r++;
    }
    return r - l;
}
