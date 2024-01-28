// https://leetcode.com/problems/spiral-matrix/?envType=featured-list&envId=top-interview-questions?envType=featured-list&envId=top-interview-questions
// 54. Spiral Matrix

#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> result = {}; 

        std::vector<std::vector<int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int i_steps = matrix[0].size(), j_steps = matrix.size()-1, i = 0, j = -1; 
        std::vector<int> steps = {i_steps, j_steps}; 
        int index_dir = 0; 

        while(steps[index_dir%2]){
            for(int k = 0; k < steps[index_dir%2]; k++){
                j+=directions[index_dir][0]; 
                i += directions[index_dir][1];

                result.push_back(matrix[i][j]); 

            }
            steps[index_dir%2]--;
            index_dir = (index_dir+1)%4; 

            

        }

    return result; 
    }
};




/*
      _0 _1 
  0_  1, 0
  1_  0, 1
  2_  -1, 0
   3_ 0, -1

*/

/*        std::pair<int, int> i_h = {0, matrix.size() - 1};  
        std::pair<int, int> j_h = {0, matrix[0].size() - 1};
        int i_p = 0, j_p = 0; 
        std::vector<int> result({}); 
        */
/*        while(result.size() < matrix.size() * matrix[0].size()){
            if(i_p == i_h.first){
                for(i_p; i_p <= i_h.second; i_p++)
                    result.push_back(matrix[i_p][j_p]); 
                j_p++; 
                for(j_p; j_p <= j_h.second; j_p++)
                    result.push_back(matrix[i_p][j_p]); 
                i_p--; 
                i_h.second-= 1, j_h.second-=1; 
            }
            else{
                for(i_p; i_p >= i_h.first; i_p--) 
                    result.push_back(matrix[i_p][j_p]); 
                j_p--;
                for(j_p; j_p >= j_h.first; j_p--)
                    result.push_back(matrix[i_p][j_p]);
                i_p++;
                i_h.first+= 1, j_h.first+= 1; 
            }
        }*/