#ifndef __TREEFUNCTIONS_H__
#define __TREEFUNCTIONS_H__
#include <bits/stdc++.h>
using namespace std;

struct TreeNode { 
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class TreeFunction { 
    void Treeify(TreeNode*& root, vector<int> arr);
};

#endif