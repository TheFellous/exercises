#include <bits/stdc++.h>

class StockSpanner{
private: 
    std::stack<std::pair<int, int>> helper; // [prices, answer]

public:
    StockSpanner()
    {
        this->helper = {}; 

    }

    int next(int price)
    {
        int answ=1; 
        while(!helper.empty() &&  helper.top().first <= price){
            answ+= helper.top().second; 
            helper.pop(); 
        }

        helper.push(std::make_pair(price, answ)); 
        return answ; 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */