#include <bits/stdc++.h>

class Solution {
public:
    int countElements(std::vector<int>& arr) {
        std::unordered_map<int, int> help; 
        for(int i = 0; i < arr.size(); i++){
            help[arr[i]]++; 
        }
        int answ = 0; 
        for(int i = 0; i < arr.size(); i++){
            answ+= help[arr[i]] * help[arr[i] + 1]; 
        }

        return answ; 
    }
};