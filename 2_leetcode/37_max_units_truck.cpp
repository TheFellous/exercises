#include <bits/stdc++.h>

class Solution {
    public:
        int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize) {
            std::priority_queue<std::pair<int, int>> maxHeap; 

            for(std::vector<int>& box : boxTypes)
                maxHeap.push({box[1], box[0]}); 
            
            
            int rem_space = truckSize, totalUnits = 0; 

            while(rem_space > 0){
                auto [units, boxes] = maxHeap.top(); 

                if(boxes > rem_space){
                    return totalUnits + rem_space * units; 
                }
                totalUnits =totalUnits + boxes * units; 
                rem_space=rem_space -boxes; 
            }
            return totalUnits; 
            

        }
    };