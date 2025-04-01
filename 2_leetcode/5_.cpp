#include <bits/stdc++.h>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        std::unordered_set<char> set = {}; 

        for(int i = 0; i < sentence.size(); i++){
            set.insert(sentence[i]); 
        }
        int x = 'a'; 
        for(int i = 0; i < 26; i++){
            if(set.find(x+i)== set.end())
                return false; 
              
        }
        return true; 
    }
};