#include <bits/stdc++.h>

class Solution {
    public:
        int maxNumberOfApples(std::vector<int>& weight) {

            std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap(weight.begin(), weight.end()); 
            int capacity = 5000; 
            int apples = 0; 
            while(!minHeap.empty()){
                if(capacity < minHeap.top())
                    return apples; 
                
                capacity -= minHeap.top(); 
                apples++; 
                minHeap.pop(); 
            }
            return apples; 
        }
    };