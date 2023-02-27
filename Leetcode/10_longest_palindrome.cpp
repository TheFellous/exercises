// https://leetcode.com/problems/longest-palindrome/?envType=study-plan&id=level-1
// 27/02/23
#include <iostream>
#include <string>
class Solution {
public:
    int longestPalindrome(std::string s) {   

        char map[128]{};
        int counter{0}, aux{0};  
        for(size_t i = 0; i < s.size(); i++) {
            if(map[s[i]] == s[i]) {
                map[s[i]] = 0;
                counter+= 2 ; 
                aux--; 
            }
            else {
            map[s[i]] = s[i];
            aux++; 
        } 
    }
    if (aux > 0)
        return counter + 1; 
    
    return counter; 
    }
};