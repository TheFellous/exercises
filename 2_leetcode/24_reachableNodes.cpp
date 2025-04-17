#include <bits/stdc++.h>

class Solution {
    std::vector<bool> seen;
    std::unordered_map<int, std::vector<int>> graph; 
    std::unordered_map<int, int> restrictions; 

    public:
        int reachableNodes(int n, std::vector<std::vector<int>>& edges, std::vector<int>& restricted) {
            seen = std::vector<bool> (n, false); 
            
            for(int& a : restricted )
                restrictions[a] = 1; 

            
            for(std::vector<int>& edge : edges){
                int x = edge[0], y = edge[1]; 

                graph[x].push_back(y); 
                graph[y].push_back(x); 
            }
            
            seen[0] = true; 
            return dfs(0); 
            
        }
        int dfs(int node){
            if(restrictions.contains(node))
                return 0; 
            
            int answ = 1; 

            for(int neighbor : graph[node]){
                if(!seen[neighbor]){
                    seen[neighbor] = true; 
                    answ += dfs(neighbor); 
                }
            }
            return answ;

        }

    };