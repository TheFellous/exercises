// https://leetcode.com/problems/find-pivot-index/?envType=study-plan&id=level-1
//2/18/2023
#include <string>
#include <vector>
class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int sum_left = 0, sum_right = 0, index = 0; 
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < index; j++) 
                sum_left += nums[j]; 
            for(int k = nums.size() - 1; k > index; k--)
                sum_right += nums[k];

            if(sum_left == sum_right)
                return index; 

            sum_left = 0; 
            sum_right = 0;   
            index += 1; 
        }
        return -1; 
    }
};