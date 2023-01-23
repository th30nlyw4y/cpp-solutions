//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/merge-two-sorted-lists/

#include "common.h"

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;
    ListNode *dummy = new ListNode(0);
    ListNode *ans = dummy;
    while (true) {
        if (l1 && l2) {
            if (l1->val < l2->val) {
                dummy->next = l1;
                l1 = l1->next;
            } else {
                dummy->next = l2;
                l2 = l2->next;
            }
            dummy = dummy->next;
            continue;
        }
        if (l1) { dummy->next = l1; } else { dummy->next = l2; }
        break;
    }
    return ans->next;
}
