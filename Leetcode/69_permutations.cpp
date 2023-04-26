// https://leetcode.com/problems/permutations/description/ - 46. Permutations
//  26/04/23 
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums)
    {
        std::vector<bool> isrepeated(nums.size(), false); 
        backtrack(nums, isrepeated);

        return answ; 
    }
private:
    std::vector<std::vector<int>> answ{};
    std::vector<int> aux{};
    void backtrack(std::vector<int>& nums, std::vector<bool>& rep)
    {
        if(aux.size() == nums.size()){
            answ.push_back(aux); 
            return; 
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(!rep[i]){
                rep[i] = true; 
                aux.push_back(nums[i]); 
                backtrack(nums, rep); 
                rep[i] = false; 
                aux.pop_back();
            }
        }      
    }
};

// [1, 2, 3]
// [1, 2, 3] = [[1, 2, 3], [1, 3, 2], [2, 3, 1]]