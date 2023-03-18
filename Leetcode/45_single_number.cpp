// https://leetcode.com/problems/single-number/
// 18/03/23 

#include <bits/stdc++.h>
class Solution {
public:
    int singleNumber(std::vector<int>& nums)
    {
        int answer = 0; 
        for(std::vector<int>::iterator i = nums.begin(); i != nums.end(); i++) 
            answer = answer^*i; 

        return answer; 
    }
}; 



/* First solution: 

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::set<int> aux{}; 
        for(int i = 0; i < nums.size(); i++)
            if(aux.count(nums[i])) aux.erase(nums[i]); 
            else                   aux.insert(nums[i]); 
        
        return *aux.begin(); 
        
    }
};

 */
