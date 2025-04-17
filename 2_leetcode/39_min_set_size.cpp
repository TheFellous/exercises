#include <bits/stdc++.h>

class Solution {
    public:
        int minSetSize(std::vector<int>& arr) {

            std::unordered_map<int, int> frequencies; 
            std::priority_queue<int> maxHeap; 

            for(int num : arr){
                frequencies[num]++; 
            }
            for(auto& [num, freq] : frequencies){
                maxHeap.push(freq); 
            }

            int minSize = arr.size()/2 + arr.size() % 2, size = 0, answ=0; 

            while(!maxHeap.empty()){
                size+= maxHeap.top(); 
                maxHeap.pop(); 
                answ++; 

                if(size >= minSize){
                    return answ; 
                }                
            }
            return answ; 

        
            
        }
    };