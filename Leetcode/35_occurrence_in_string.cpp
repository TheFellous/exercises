// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// 10/03/23
#include <bits/stdc++.h>
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int aux{0}; 
        for(int i = 0; i < haystack.size(); i++)
        {
            if(haystack[i] == needle[aux]){
                if(aux == needle.size() - 1) return i - aux; 
                aux++; 
            }
            else 
            i = i - aux,
            aux = 0; 
        }
        return -1; 
    }
};
