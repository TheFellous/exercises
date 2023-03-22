// https://leetcode.com/problems/excel-sheet-column-number/
// 21/03/23
#include <bits/stdc++.h>

class Solution {
public:
    int titleToNumber(std::string columnTitle)
    {
        int answ{0};
        for(char c : columnTitle)
            answ = answ * 26 + (c - 'A' + 1);

        return answ; 
    }
};
