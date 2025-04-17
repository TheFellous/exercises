#include <bits/stdc++.h>

class Solution {
    public:
    std::queue<std::vector<int>> helper; 
    std::vector<bool> seen; 
    int r, c; 
        int snakesAndLadders(std::vector<std::vector<int>>& board) {
            this->r = board.size()-1; 
            this->c = board[0].size()-1;
            int size = (this->r + 1) *(this->c + 1); 

            this->seen = std::vector<bool>(size + 1, false); 
            std::queue<std::pair<int, int>> fila; // {pos, steps}

            fila.push({1, 0}); 
            seen[1] = true; 

            while(!fila.empty()){
                std::pair<int, int> curr= fila.front(); 
                fila.pop(); 

                if(curr.first == size)
                    return curr.second; 

                for(int i = 1; i <= 6; i++){
                    int jump = curr.first + i; 
                    if(jump > size)
                        break; 
                    std::vector<int> idx = find_element(jump); 

                    int next_val = (board[idx[0]][idx[1]] == -1) ? jump : 
                                    board[idx[0]][idx[1]];  
                    if(seen[next_val])
                        continue; 
                    
                    
                    seen[next_val] = true; 
                    fila.push({next_val, curr.second +1}); 
                    
                }

            }
            return -1; 

        }



        std::vector<int> find_element(int val) {
            int index = val - 1;
            int row = this->r - index / (this->c + 1);
            int col;
        
            if ((this->r - row) % 2 == 0) {
                col = index % (this->c + 1);
            } else {
                col = this->c - index % (this->c + 1);
            }
        
            return {row, col};
        }


    };
