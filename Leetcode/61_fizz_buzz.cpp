// https://leetcode.com/problems/fizz-buzz/
// 26/03/23

#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> answ{"1"}; 

        for(int i = 2; i <= n; i++) 
            if(i % 5 == 0 && i % 3 == 0) answ.push_back("FizzBuzz"); 
            else if(i % 3 == 0)          answ.push_back("Fizz"); 
            else if(i % 5 == 0)          answ.push_back("Buzz"); 
            else                         answ.push_back(std::to_string(i)); 

        return answ; 

    }
};