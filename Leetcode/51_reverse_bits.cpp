// https://leetcode.com/problems/reverse-bits/
// 22/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    uint32_t reverseBits(uint32_t n)
    {
    uint32_t answ = 0;  
    for(int i = 0; i < 32; i++){
        uint32_t b1 = (n >> 31 - i) & 1; 
        answ |= (b1 << i);
       }
    return answ; 
    }
};