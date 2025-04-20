#include <bits/stdc++.h>

class Solution
{
    std::unordered_map<int, std::vector<int>> graph;
    std::vector<bool> seen;

public:
    int countComponents(int n, std::vector<std::vector<int>> &edges)
    {
        int answ = 0; 
        seen = std::vector<bool>(n, false); 
        for (auto &edge : edges)
        {
            int x = edge[0], y = edge[1];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        for(int i = 0; i < n; i++){
            if(!seen[i]){
                answ+=dfs(i); 
            }

        }
        return answ; 
    }

    int dfs(int node)
    {
        for (int neighbour : graph[node])
        {
            if (!seen[neighbour]){
                seen[neighbour] = true;
                dfs(neighbour); 
            }
        }
        return 1; 
    }
}; 