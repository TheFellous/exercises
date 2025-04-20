#include <bits/stdc++.h>

class Solution
{
public:
    std::unordered_map<int, std::vector<int>> graph;
    std::vector<bool> seen;

    bool validPath(int n, std::vector<std::vector<int>> &edges, int source, int destination)
    {
        seen = std::vector<bool>(n, false); // ✅ You must do this


        for (auto edge : edges)
        {
            int x = edge[0], y = edge[1];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        return dfs(source, destination);
    }
    bool dfs(int node, int target)
    {
        if(node == target) return true; 
        seen[node] = true; 
        for (int neighbour : graph[node])
        {
            if (!seen[neighbour])
            {
                if(dfs(neighbour, target)) return true; 
            }
        }
        return false;
    }
};