// https://leetcode.com/problems/power-of-three/
// 24/03/23

#include <bits/stdc++.h>

class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        return 1162261467 % n == 0 && n > 0;   
    }
};