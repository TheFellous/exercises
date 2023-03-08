// https://leetcode.com/problems/last-stone-weight/?envType=study-plan&id=level-1
// 08/03/23
#include <bits/stdc++.h>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones)
    {
    std::priority_queue<int> sorted(stones.begin(), stones.end()); 
    int comp1, comp2; 
        while(sorted.size() > 1)
        {
            comp1 = sorted.top(); 
            sorted.pop(); 
            comp2 = sorted.top(); 
            sorted.pop(); 
            if(comp1 != comp2) sorted.push(std::abs(comp1 - comp2)); 
        }
        if(sorted.empty()) return 0; 
        return sorted.top(); 
    }
}; 