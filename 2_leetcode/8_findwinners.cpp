#include <bits/stdc++.h>

class Solution {
    public:
        std::vector<std::vector<int>> findWinners(std::vector<std::vector<int>>& matches) {
            std::unordered_map<int, int> counts; 
            std::unordered_set<int> players; 
            
            for(int i = 0; i < matches.size(); i++){
                counts[matches[i][1]]++; 

                players.insert(matches[i][0]); 
                players.insert(matches[i][1]); 
            }
            std::vector<std::vector<int>> answ(2); 
            for(auto it = players.begin(); it != players.end(); it++){
                
                if(counts[*it] == 0){
                    answ[0].push_back(*it); 
                }
                if(counts[*it] == 1) {
                    answ[1].push_back(*it); 
                }
                
            }
            for(auto& row : answ) {
                std::sort(row.begin(), row.end()); 
            }
            return answ; 
    }

};