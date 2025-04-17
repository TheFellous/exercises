#include <bits/stdc++.h>

class Solution {
    std::vector<bool> seen; 
    std::vector<std::vector<int>> graph;
    public:
        int maximumDetonation(std::vector<std::vector<int>>& bombs) {
            graph = std::vector<std::vector<int>>(bombs.size()); 
            int i = 0; 

                for(std::vector<int>& bomb : bombs){
                    
                    for(int j = 0; j < bombs.size(); j++){
                        if(i == j) continue; 

                        if(squared_distance({bomb[0], bomb[1]}, {bombs[j][0], bombs[j][1]}) <= 1LL * bomb[2]*bomb[2]){
                            graph[i].push_back(j); 
                        }

                    }
                    i++; 
                }

                int max = 1; 
                for(int i = 0; i < bombs.size(); i++)
                {
                    seen = std::vector<bool>(bombs.size(), false); 

                    max = std::max(dfs(i), max); 
                }
                return max; 
            
            
        }
        int dfs(int node){
            seen[node] = true;
            int length = 1; 

            for(int neighbor : graph[node]){
                if(!seen[neighbor]){ 
                    length+=dfs(neighbor); 
                }
            }
            return length; 
        }

        long long squared_distance(std::pair<int, int> v1, std::pair<int, int> v2) {
            long long dx = v1.first - v2.first;
            long long dy = v1.second - v2.second;
            return dx * dx + dy * dy;
        }
        
    };