#include <bits/stdc++.h>

class Solution {
    std::vector<std::vector<int>> directions = {{1, 0}, {0, 1},{-1, 0}, {0, -1} }; 
    std::vector<std::vector<int>> mapa; 

    public:
        int maxAreaOfIsland(std::vector<std::vector<int>>& grid) {
            mapa = std::vector<std::vector<int>>(grid.size(), std::vector<int>(grid[0].size(), 0)); 
            int max = 0; 
            for(int i = 0; i < grid.size(); i++){
                for(int j = 0; j < grid[0].size(); j++){
                    if(!mapa[i][j] && grid[i][j])
                        max = std::max(max, dfs(i, j, grid)); 
                }
            }
            return max; 
        }

        int dfs(int i, int j, std::vector<std::vector<int>>& grid){
            if(!is_valid(i, j, grid))
                return 0; 

            int area = 1; 
            mapa[i][j]=1; 
            
                for(std::vector<int>& direction: directions){
                int nextRow = i + direction[0], nextCol = j + direction[1];  
                
                if(!mapa[nextRow][nextCol] && is_valid(nextRow, nextCol, grid)){
                    area+= dfs(nextRow, nextCol, grid);
                }
            }
            return area; 

        }
        bool is_valid(int i, int j, std::vector<std::vector<int>>& grid){
            
            return 0 <= i && i < grid.size() && 0<= j && j < grid[0].size() && grid[i][j] == 1; 

        }

    };