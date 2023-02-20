// https://leetcode.com/problems/is-subsequence/submissions/901544088/?envType=study-plan&id=level-1
 // 2/20/23
#include <string>
#include <vector>
class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        std::string sub_s = s; 
        int index_sub_s = 0; 
        if(s == t)
            return true; 
        for(char c : t) {
            if(c == sub_s[0]) {
                sub_s = sub_s.substr(1); 
            }
            if (sub_s == "") 
                return true;
        }    
        return false; 
    }
};