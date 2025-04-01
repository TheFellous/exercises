#include <bits/stdc++.h>

class Solution
{
public:
    std::string simplifyPath(std::string path)
    {
        std::vector<std::string> helper;
        std::string temp; 
        int i = 0; 

        while(i < path.size()) {
            while(i < path.size() && path[i] == '/') i++; 

            while(i < path.size() && path[i] != '/'){
                temp+= path[i]; 
                i++; 
            }

            if(temp == ".." && !helper.empty()){
                helper.pop_back(); 
            }

            else if(!temp.empty() && temp!= "." && temp!="..")
                helper.push_back(temp); 
            
            temp=""; 
        }
        if(helper.empty()) return "/"; 

        std::string res; 
        for(std::string& s : helper) {
            res += '/' + s; 
        }
        return res; 
    }
};