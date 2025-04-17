#include <bits/stdc++.h>

class Solution {
    public:
        bool canReach(std::vector<int>& arr, int start) {
            std::vector<bool> seen(arr.size(), false); 

            std::queue<int> idx_queue; 

            idx_queue.push(start); 

            while(!idx_queue.empty()){
                int curr_idx = idx_queue.front(); 
                idx_queue.pop(); 

                seen[curr_idx] = true; 

                if(arr[curr_idx] == 0)
                    return true; 
                
                int next = curr_idx + arr[curr_idx], prev = curr_idx - arr[curr_idx]; 
                if(prev >= 0 && !seen[prev]){
                    idx_queue.push(prev); 
                }
                if(next < arr.size()  && !seen[next])
                    idx_queue.push(next); 
            }

            return false; 


        }

    };