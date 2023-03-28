// https://leetcode.com/problems/reverse-integer/
// 28/03/23 - 7. Reverse Integer

#include <bits/stdc++.h>

class Solution {
public:
    int reverse(int x) 
    {
        int answ = 0;
        while(x != 0){
            answ = answ * 10 + x % 10;
            x = x/10;
            if(answ>INT_MAX || answ<INT_MIN) return 0;
        }
        return answ; 
    }
};