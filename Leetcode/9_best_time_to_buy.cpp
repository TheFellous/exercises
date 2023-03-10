// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan&id=level-1
// 27/02/23
#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices)
    {
        int min = prices[0];
        int answ = 0;
 
        for(int i = 1; i < prices.size(); ++i)
        {
            if(min > prices[i])
                min = prices[i];

            answ = std::max(answ, prices[i]- min);
        }
        return answ;
    }
};