// https://leetcode.com/problems/find-all-anagrams-in-a-string/?envType=study-plan&id=level-1
// 03/03/23
#include <iostream>
#include <string> 
#include <vector>
class Solution {
public:
    std::vector<int> findAnagrams(std::string s, std::string p)
    {   
        std::vector<int> answer{}; 
        std::vector<int> aux(32); 
        std::vector<int> map(32); 
        if(s.size() < p.size()) return {}; 
        for(int i = 0; i < p.size(); i++)
        {
            map[p[i] - 'a']++; 
            aux[s[i] - 'a']++; 
        }
        for(int i = 0; i < s.size() - p.size(); i++)
        {
            if(aux == map) answer.push_back(i); 
            aux[s[i] - 'a']--; 
            aux[s[i + p.size()] - 'a']++; 
        }
        if(aux == map) answer.push_back(s.size() - p.size());
        return answer; 
    }  
};
// My first solution without using sliding window technique 
/*class Solution {
public:
    std::vector<int> findAnagrams(std::string s, std::string p)
    {   
        std::vector<int> answer{}; 
        std::vector<int> aux(32); 
        std::vector<int> map_p(32); 
        if(s.size() < p.size()) return {}; 
        for(int i = 0; i < p.size(); i++) map_p[p[i] - 'a']++; 

        for(int i = 0; i <= s.size() - p.size(); i++){
            for(int j = i; j < i + p.size(); j++){
                if(!map_p[s[j] - 'a']){
                    i = j; 
                    break;
                }
                aux[s[j] - 'a']++; 
            }
            if(aux == map_p) answer.push_back(i);

            aux.assign(32, 0); 
        }
    return answer; 
    }  
};*/