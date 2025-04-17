#include <bits/stdc++.h>


class Solution {
    public:
        int minStoneSum(std::vector<int>& piles, int k) {
            std::priority_queue<int> maxHeap(piles.begin(), piles.end()); 


            for(int i = 0; i < k; i++){
                int max_val = maxHeap.top(); 
                max_val-= max_val/2; 

                maxHeap.pop(); 
                maxHeap.push(max_val); 
            }
            int sum = 0; 
            while(!maxHeap.empty()){
                sum+= maxHeap.top(); 
                maxHeap.pop(); 
            }
            return sum; 
        }
    };