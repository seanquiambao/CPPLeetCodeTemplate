#include <bits/stdc++.h>
#include "../lib/LinkedListFunctions.h"

ListNode *LinkedListFunction::LISTIFY(vector<int> arr)
{

    if (arr.size() == 0)
    {
        return nullptr;
    }
    ListNode *head = new ListNode(arr[0]);
    ListNode *curr = head;

    for (int i = 1; i < arr.size(); ++i)
    {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }

    return head;
}