// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp
//2/18/23
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::string cat_storage = ""; 
    std::vector<std::string> storage {}; 
    for(int i = 0; i < s.size(); i+= 2) {  
        if (i == s.size() - 1){
          break;  
        }
        storage.push_back(cat_storage.append(s, i, 2)); 
        cat_storage.clear();  
        }
    if(s.size() % 2 != 0) {
        storage.push_back(s.substr(s.size() - 1) + "_"); 
    }
  return storage; 
}

/* Solution from a friend:
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> storage((s.size()+1)/2, "__");
    
    for(int i = 0; i < s.size(); ++i)
        storage[i/2][i%2] = s[i];
    
    return storage;
} 
*/