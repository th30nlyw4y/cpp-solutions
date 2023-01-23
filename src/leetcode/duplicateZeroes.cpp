//
// Created by Petr on 22/01/2023.
//
// https://leetcode.com/problems/duplicate-zeros/

#include <vector>

using namespace std;

// 1st solution
void duplicateZerosV1(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            int j = i + 1, tmp = 0;
            while (j < arr.size()) {
                swap(arr[j], tmp);
                j++;
            }
            i++;
        }
    }
}

// 2nd solution
void duplicateZerosV2(vector<int> &arr) {
    int zerosToDup = 0, arrSize = arr.size() - 1;
    for (int i = 0; i <= arrSize - zerosToDup; i++) {
        if (!arr[i]) {
            if (i == arrSize - zerosToDup) {
                arr[arrSize] = 0;
                arrSize--;
                break;
            }
            zerosToDup++;
        }
    }
    int newArrSize = arrSize - zerosToDup;
    for (int i = newArrSize; i >= 0; i--) {
        if (!arr[i]) {
            arr[i + zerosToDup] = 0;
            arr[i + --zerosToDup] = 0;
        } else {
            arr[i + zerosToDup] = arr[i];
        }
    }
}
