// https://leetcode.com/problems/plus-one/
// 10/03/23
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits)
    {
        bool plus_one{true}; 
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            if (plus_one == true) digits[i]++; 
            else continue; 
            
            if (i == 0 && digits[i] >= 10){
                digits[i] -= 10; 
                digits.insert(digits.begin(), 1);
                return digits; 
            }
            else if(digits[i] >= 10){
                digits[i] -= 10; 
                plus_one = true;  
            }
            else plus_one = false; 
        }
        return digits; 
    }
};