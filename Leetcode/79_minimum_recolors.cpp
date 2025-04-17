// 2379. Minimum Recolors to Get K Consecutive Black Blocks
#include <bits/stdc++.h>

class Solution {
public:
    int minimumRecolors(std::string blocks, int k) {
        int whites = 0; 
        for(int i = 0; i < k; i++){
            if(blocks[i] == 'W')
                whites++; 
        }
        int j = 0; 

        int min_whites = whites; 
        for(int i = k; i < blocks.size(); i++) {
            if(blocks[j] == 'W')
                whites--; 

            if(blocks[i] == 'W')
                whites++;  
                
            if(whites < min_whites)
                min_whites = whites; 
            j++; 
        }
        return min_whites; 
    }
};