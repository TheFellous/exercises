// https://leetcode.com/problems/number-of-1-bits/description/
// 22/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    int hammingWeight(uint32_t n) {

    int answ{0}; 
        for(int i = 0; i < 32; i++)
            if((n >> i) & 1) answ++;
        return answ; 
    }
};