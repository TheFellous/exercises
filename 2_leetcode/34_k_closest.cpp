#include <bits/stdc++.h>
class Solution {
    public:
        std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int k) {
            std::priority_queue<std::pair<int, std::vector<int>>> maxHeap; 

            for(std::vector<int>& point : points){
                int sqrd_dist = point[0]*point[0] + point[1]*point[1]; 

                maxHeap.push({sqrd_dist, point}); 

                if(maxHeap.size() > k)
                    maxHeap.pop(); 
            }
            std::vector<std::vector<int>> answ; 
            while(!maxHeap.empty()){
                answ.push_back(maxHeap.top().second); 
                maxHeap.pop(); 
            }
            return answ; 

        }

    };


/*
class Solution {
    public:
        std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int k) {
            std::priority_queue<
                std::pair<int, std::vector<int>>,
                std::vector<std::pair<int, std::vector<int>>>,      // container type
                std::greater<std::pair<int, std::vector<int>>>>
                minHeap;
            
            

            for(std::vector<int>& point : points){
                int distance_squared = point[0]*point[0] + point[1]*point[1]; 
                
                minHeap.push({distance_squared, point}); 
            }

            std::vector<std::vector<int>> answ; 

            for(int i = 0; i < k; i++){
                answ.push_back(minHeap.top().second);
                minHeap.pop();   
            }

            return answ; 

            
        }

    };*/