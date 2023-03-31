// https://leetcode.com/problems/container-with-most-water/
// 31/03/23 - 11. Container With Most Water

#include <bits/stdc++.h>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        
        int i = 0, j = height.size() - 1, maxA = 0; 
        while(i != j){
            maxA = std::max(maxA, std::min(height[i], height[j]) * (j - i));
            if(height[i] < height[j]) i++; 
            else j--; 
        }
            return maxA; 
    }
};