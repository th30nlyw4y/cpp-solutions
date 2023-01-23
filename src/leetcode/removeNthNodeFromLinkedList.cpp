//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

#include "common.h"

ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *tmp = new ListNode(-1);
    tmp->next = head;
    ListNode *fast = tmp, *slow = tmp;
    while (n--) {
        fast = fast->next;
    }
    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next=slow->next->next;
    return tmp->next;
}
