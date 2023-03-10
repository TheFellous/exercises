#include <bits/stdc++.h>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
 
        std::string aux{""}; 
        for(int i = 0; i < strs[0].size(); i++){
            for(int j = 1; j < strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != strs[0][i]) return aux;
            }
            aux += strs[0][i]; 
        }
        return aux; 
    }
};
