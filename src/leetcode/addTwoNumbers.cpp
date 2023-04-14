//
// Created by Petr on 14/04/2023.
//

#include <bits/stdc++.h>
#include "common.h"

using namespace std;

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int q = 0;
        ListNode *tmp = new ListNode();
        ListNode *ans = tmp;
        while (l1 != nullptr || l2 != nullptr || q != 0) {
            tmp->next = new ListNode();
            tmp = tmp->next;

            int l1Val = l1 != nullptr ? l1->val : 0;
            int l2Val = l2 != nullptr ? l2->val : 0;

            tmp->val = (l1Val + l2Val + q) % 10;
            q = (l1Val + l2Val + q) / 10;

            if (l1 != nullptr) { l1 = l1->next; }
            if (l2 != nullptr) { l2 = l2->next; }
        }
        return ans->next;
    }
};
