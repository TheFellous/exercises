// https://leetcode.com/problems/rotate-image/ - 48. Rotate Image
// 09/04/23 
#include <bits/stdc++.h>

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix)
    {
        std::vector<std::vector<int>> aux = matrix; 
        int m = 0, n = 0; 
        for(int i = matrix.size() - 1; i >= 0; i--){
            for(int j = 0; j < matrix.size(); j++){
                matrix[j][i] = aux[m][n]; 
                n++; 
            }
            m++; 
            n = 0; 
        }
    }
};

// a[0][2] -> a[2][3]

// a[0][0] ->  a[0][3]

// a