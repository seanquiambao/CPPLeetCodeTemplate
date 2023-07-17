#include <bits/stdc++.h>
#include "../lib/TreeFunctions.h"

void TreeFunction::PUSH_ELEMENTS_ARRAYTREE(vector<string>& arr, string t) {
    t = t.substr(1, t.size() - 2);
    stringstream ss(t);
    string argument;

    while(!ss.eof()) {
        getline(ss, argument, ',');
        arr.push_back(argument);
    }
}

void TreeFunction::POPULATE_ARRAYTREE(vector<string>& arr, string input) {
    if(input[0] != '[' || input[input.size() - 1] != ']') { throw invalid_argument("Must be a valid array."); }
    this->PUSH_ELEMENTS_ARRAYTREE(arr, input);
}