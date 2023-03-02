// https://leetcode.com/problems/number-of-islands/?envType=study-plan&id=level-1
// 02/03/23
#include <iostream>
#include <vector>
class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        int counter = 0; 
        for(int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    explore_island(grid, i, j); 
                    counter++; 
                }
            }
        }
        return counter; 
    }
private:
    void explore_island(std::vector<std::vector<char>>& grid, int i, int j)
    {
        if (grid[i][j] != '1') return; 

        grid[i][j] = '3'; 
        
        if(i + 1 < grid.size())     explore_island(grid, i + 1, j); 
        if(i - 1 >= 0)              explore_island(grid, i - 1, j);     
        if(j + 1 < grid[0].size())  explore_island(grid, i, j + 1); 
        if(j - 1 >= 0)              explore_island(grid, i, j - 1);     
    }
};