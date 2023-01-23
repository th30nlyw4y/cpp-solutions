//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/problems/middle-of-the-linked-list/

#include "common.h"

ListNode *middleNode(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
