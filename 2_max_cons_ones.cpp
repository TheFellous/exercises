/*Given a binary array nums and an integer k, return the 
maximum number of consecutive 1's in the array if you can flip at most k 0's.
*/

#include <bits/stdc++.h>

class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int left = 0, right = 0, zeroCount = 0, maxLength = 0;
        
        while (right < nums.size()) {
            if(nums[right] == 0)
                zeroCount++; 
            
            while(zeroCount > k) {
                if(nums[left] == 0)
                    zeroCount--; 
                    
                left++; 
            }
            
            maxLength = std::max(maxLength, right - left +1);    
            right++; 
        }
        return maxLength;
    }
};