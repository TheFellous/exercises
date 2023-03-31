// https://leetcode.com/problems/3sum/
// 30/03/23 - 15. 3Sum

#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> answ{};
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; ++i) {
            if (nums[i] > 0) break; 
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = nums.size() - 1;

            while(j < k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    answ.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[j] == nums[j + 1]) ++j;
                    while(j < k && nums[k] == nums[k - 1]) --k; 
                    ++j; --k;
                }
                else if (nums[j] + nums[k] + nums[i] < 0) 
                    ++j;
                else 
                    --k; 
            }
        }
        return answ;
    }
};