//
// Created by Petr on 02/05/2023.
//
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

#include <vector>

using namespace std;

double average(vector<int> &salary) {
    double res = 0, min = 1e6, max = 1000;
    for (int i = 0; i < salary.size(); i++) {
        if (salary[i] < min) { min = salary[i]; }
        if (salary[i] > max) { max = salary[i]; }
        res += salary[i];
    }
    return (res - min - max) / (salary.size() - 2);
}