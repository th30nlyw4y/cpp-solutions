//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/reverse-linked-list/

#include "common.h"

ListNode *reverseList(ListNode *head) {
    if (!head) return head;
    ListNode *prev = nullptr, *curr = head, *tmp;
    while (curr) {
        tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }
    return prev;
}
