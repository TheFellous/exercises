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
// AAA - 1
// AAZ - 26
// ABA - 26 * 1 + 1
// AZA - 26 * 25 + 1 
// AZZ - 26 * 25 + 25
// BAA - 26 * 26 + 1
// CAA - 26 * 26 * 2 + 1 
// ZAA - 26 * 26 * 25  
// ZZZ - 26 * 26 * 25 + 26 * 25 + 25
// 1 - 26³
// A 
// BA - 2 , 2 * 26 + 1
// BAA 2, 2 * 26 + 1, (2 * 26 + 1 )* 26, 26 * 26 * 2 + 26 * 26 + 1