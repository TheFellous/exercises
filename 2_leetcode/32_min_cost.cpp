#include <bits/stdc++.h>

class Solution {
    public:
        int connectSticks(std::vector<int>& sticks) {

            std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap(sticks.begin(), sticks.end());
            if(sticks.size() == 0) return 0; 
            
            int cost = 0;

            while(minHeap.size() != 1){
                int min1 = minHeap.top(); minHeap.pop(); 
                int min2 = minHeap.top(); minHeap.pop(); 
                cost+= min1 + min2; 
                minHeap.push(min1 + min2); 
            }


            return cost; 
        }
    };