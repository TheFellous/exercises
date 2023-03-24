// https://leetcode.com/problems/intersection-of-two-arrays-ii/
// 24/03/23 

#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) 
    {
        std::vector<int> answ{}; 
        std::map<int, int> mapa{}; 

        for(int i = 0; i  <  nums2.size(); i++)
            if(mapa.count(nums2[i])) mapa[nums2[i]]++; 
            else mapa[nums2[i]] = 1; 
        
        for(int i = 0; i < nums1.size(); i++){
            if(mapa[nums1[i]] && mapa[nums1[i]] > 0){
                mapa[nums1[i]]--;  
                answ.push_back(nums1[i]); 
            }
        }
        return answ; 
    }
};