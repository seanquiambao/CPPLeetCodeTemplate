#ifndef __LINKEDLISTFUNCTIONS_H__
#define __LINKEDLISTFUNCTIONS_H__
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *y) : val(x), next(y) {}
};

class LinkedListFunction
{
public:
    ListNode *LISTIFY(vector<int> arr);
};

#endif