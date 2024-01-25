// https://leetcode.com/problems/count-and-say/description/?envType=featured-list&envId=top-interview-questions?envType=featured-list&envId=top-interview-questions
// 38. Count and Say
#include <bits/stdc++.h>

class Solution {
public: 
    std::string countAndSay(int n){
        std::string result = "1"; 

        while(n-- -1) {
            std::string current = ""; 

            for(int i = 0; i < result.size(); i++){
                int counter = 1; 
                while(result[i] == result[i + 1] && i < result.size() - 1)
                    counter++, 
                    i++; 
                current.append(std::to_string(counter) + result[i]); 
            }
            result = current; 
        }
        return result; 
    }

}; 
/* 
#include <bits/stdc++.h>

class Solution {
public:
    std::string countAndSay(int n) {
        std::string result = "1"; 
        for(int i = 1; i < n; i++){
            std::vector<std::pair<std::string, int>> x = convert(result); 
            result = convert2(x);
        }

        return result; 
    }
std::vector<std::pair<std::string, int>> convert(std::string number)
{
    std::vector<std::pair<std::string, int>> result; 
    if(number.size() == 0) return result; 
    for(int i = 0; i < number.size(); i++){
        int counter = 1; 
        while(i < number.size() - 1 && number[i] == number[i + 1]){
            i++; 
            counter++; 
        }
        result.push_back({std::string(1, number[i]), counter});
    }
    return result;
}
std::string convert2(std::vector<std::pair<std::string, int>> hld)
    {
        std::string result = ""; 
        for(std::vector<std::pair<std::string, int>>::iterator it = hld.begin(); it !=hld.end(); ++it){
            result.append(std::to_string(it->second) + it->first);
        }
        return result; 
    }


};
*/
