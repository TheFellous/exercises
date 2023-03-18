// https://leetcode.com/problems/pascals-triangle/
// 18/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows)
    {
        std::vector<std::vector<int>> answer{{1}}; 
        std::vector<int> aux{}; 
        int counter{1}; 
        
        while(counter < numRows){
            aux.push_back(1); 

            for(int i = 1; i < counter; i++) 
                aux.push_back(answer[counter - 1][i - 1] + answer[counter - 1][i]); 
            
            aux.push_back(1);
            answer.push_back(aux);  
            aux = {}; 
            counter++; 
        }
        return answer; 
    }
};