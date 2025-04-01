#include <bits/stdc++.h>

class Solution {
    public:
        int numJewelsInStones(std::string jewels, std::string stones) {
            std::unordered_set<int> jewelsset; 
            for(char j : jewels) 
                jewelsset.insert(j); 
            
            int answ = 0; 
            for(char c: stones){
                if(jewelsset.contains(c));
                    answ++;  
            }
            return answ; 


        }
    };