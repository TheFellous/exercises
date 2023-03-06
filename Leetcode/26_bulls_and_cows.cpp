// https://leetcode.com/problems/bulls-and-cows/?envType=study-plan&id=level-1
// 06/03/23
#include <bits/stdc++.h>

class Solution {
public:
    std::string getHint(std::string secret, std::string guess)
    {
        std::vector<int> map_secret(128, 0); 
        int bulls{0}, cows{0}; 
        for(int  i = 0; i < secret.size(); i++) map_secret[secret[i]]++; 

        for(int i = 0; i < guess.size(); i++)
        {
            if(secret[i] == guess[i]){
                bulls++; 
                map_secret[guess[i]]--;
                if(map_secret[guess[i]] < 0) cows--;               
            }  
            else if(map_secret[guess[i]] > 0){
                cows++; 
                map_secret[guess[i]]--; 
            }
        }
        return std::to_string(bulls) + 'A' + std::to_string(cows) + 'B'; 
    }
};