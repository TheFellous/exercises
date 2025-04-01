#include <bits/stdc++.h>

class Solution {
    public:
        int maxNumberOfBalloons(std::string text) {
            std::unordered_map<char, int> counter; 
            for(char c : text) {
                counter[c]++; 
            }
            return std::min({counter['b'], counter['a'], counter['l']/2, counter['o']/2, counter['n']}); 
        }
    };