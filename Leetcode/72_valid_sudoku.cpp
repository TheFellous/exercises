// https://leetcode.com/problems/valid-sudoku/description/
// 36. Valid Sudoku
#include <bits/stdc++.h>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) 
    {
        int columns[9][9] = {0}, rows[9][9] = {0}, matr[9][9] = {0};
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j]!= '.'){
                    int testnum = board[i][j] - '0' - 1; 
                    int matrtest = i / 3 * 3 + j / 3;

                    if(columns[i][testnum] || rows[testnum][j] || matr[matrtest][testnum])
                        return false;
                    columns[i][testnum] = rows[testnum][j] = matr[matrtest][testnum] = 1;
                }
            }
        }
        return true; 
    }
};