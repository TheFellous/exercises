#include <bits/stdc++.h>

class Solution {
    public:
        std::string makeGood(std::string s) {
            std::string helper; 

            for(char& c : s){
                if(!helper.empty() &&
                    std::tolower(c) == std::tolower(helper.back()) && c != helper.back()
                    ){
                        helper.pop_back();

                    }
                else helper+=c; 
                
            }
            return helper; 

            
        }
    };