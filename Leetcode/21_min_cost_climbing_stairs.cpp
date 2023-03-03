// https://leetcode.com/problems/min-cost-climbing-stairs/?envType=study-plan&id=level-1
// 03/03/23
#include <iostream>
#include <vector>
class Solution {
public:
    int minCostClimbingStairs(std::vector<int>& cost)
    {    
        for(int i = 2; i < cost.size(); i++) 
            cost[i] = cost[i] + std::min(cost[i - 1], cost[i - 2]); 
        
        return std::min(cost[cost.size() - 1], cost[cost.size() - 2]); 
    }
};