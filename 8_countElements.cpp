#include <bits/stdc++.h>

class Solution {
    public:
        int countElements(std::vector<int>& arr) {
            std::unordered_map<int, int> help; 
            for(int num : arr){
                help[num]++; 
            }
            int x = 0, sum = 0;  
            for(auto& itr : help){
                x = itr.first; 
            
                if(help.find(x+1)!= help.end())
                    sum+= itr.second; 
            }

            return sum; 
        }
    };