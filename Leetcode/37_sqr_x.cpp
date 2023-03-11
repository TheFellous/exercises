// https://leetcode.com/problems/sqrtx/description/
// 11/03/23
#include <bits/stdc++.h>

class Solution {
public:
    int mySqrt(int x) {
        
        long long int front{0}, mid{x/2}, end{x};

        while(mid * mid != x) {
            if(mid * mid <  x) front = mid + 1; 
            else end = mid - 1; 

            mid = (front + end)/2; 
            if((mid) * (mid) < x && (mid + 1) * (mid + 1) > x) return mid; 
        }
        return mid; 
    }
};