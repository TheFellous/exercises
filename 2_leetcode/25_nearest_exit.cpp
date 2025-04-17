#include <bits/stdc++.h>

class Solution {
    std::vector<std::vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; 
    std::vector<int> entr; 
    std::vector<std::vector<char>> maz; 
    public:
        int nearestExit(std::vector<std::vector<char>>& maze, std::vector<int>& entrance) {
            int m = maze.size(), n = maze[0].size(); 
            this->entr = entrance; 
            std::queue<std::vector<int>> helper; 
            this->maz = maze; 
            std::vector<std::vector<bool>> is_visited(maze.size(), std::vector<bool>(maze[0].size(), false)); 

            helper.push({entrance[0], entrance[1], 0}); 


            while(!helper.empty()) {

                std::vector<int> front = helper.front(); 
                helper.pop(); 
                if(is_visited[front[0]][front[1]])
                    continue; 
                is_visited[front[0]][front[1]] = true; 
                
                if(is_exit(front[0], front[1])){
                    return front[2]; 
                }
                for(std::vector<int> direction : directions) {
                    int i = front[0] + direction[0], j = front[1] + direction[1], steps=front[2] + 1; 
                    if(0 <= i && i < m && 0 <= j && j < n && maze[i][j] == '.')
                        helper.push({i, j, steps}); 
                }
            }
            return -1; 

            

        }
        bool is_exit(int i, int j){
            return (i != entr[0] || j != entr[1]) && 
            (i == 0 || j == 0 || i  == maz.size() - 1 || j == maz[0].size() - 1); 
        }
    };