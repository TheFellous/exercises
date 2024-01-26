// https://leetcode.com/problems/powx-n/description/?envType=featured-list&envId=top-interview-questions?envType=featured-list&envId=top-interview-questions
// 50. Pow(x, n)
#include <bits/stdc++.h>
class Solution {
public:
    double myPow(double x, int n) 
    {  
        double result = 1;
        int k = n; 
        while(n){
            if (n % 2) result = result * x; 
            x = x * x; 
            n = n/2; 
        }
        return k >= 0 ? result : 1/result; 
    }
};
    // ex: n = 23, iterations: (n, x, result) = (23, x, 1) -> (11, x², x) -> (5, x^4, x^3), (2, x⁸, x^7)
    // (1, x^16, x⁷), (0, x^32, x^23) 23-> 10111 
/*
class Solution {
public:
    double myPow(double x, int n) 
    {  
        double result = 1; 

        for(int i = 0; i < std::abs(n); i++)
            result *= x; 

        if(n < 0) return 1/result; 
        return result; 
    }
    
}; 
*/