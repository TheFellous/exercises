// https://leetcode.com/problems/decode-string/description/?envType=study-plan&id=level-1
// 07/03/23         (this one was based on the solutions from the problem) 

#include <bits/stdc++.h>
class Solution {
private:
    std::string decoder(const std::string& s, int& i)
    {
        std::string answ{""}, cat{""};
        int counter{0};   
        while(i < s.size() && s[i] != ']')
        {
            if(!std::isdigit(s[i])) answ += s[i++]; 
            else
            {
                counter = 0; 
                while(std::isdigit(s[i]) && i < s.size()) counter = 10 * counter + s[i++] - '0'; 

                i++;                            
                cat = decoder(s, i); 
                i++;             
                for(int j = 0; j < counter; j++) answ += cat;       
            }       
        }
        return answ;
    }
public: 
    std::string decodeString(std::string s)
    {
        int index = 0; 
        return decoder(s, index);
    }
};
