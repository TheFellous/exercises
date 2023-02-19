//https://leetcode.com/problems/running-sum-of-1d-array/description/?envType=study-plan&id=level-1
// 2/18/23
#include <string>
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {

    std::vector<int> result {nums[0]}; 
    for(int i = 0; i < nums.size() - 1; i++) {
        result.push_back(result[i] + nums[i+1]); 
    }
    return result;       
    }
     
};