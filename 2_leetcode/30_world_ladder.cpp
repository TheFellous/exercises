#include <bits/stdc++.h>

class Solution
{
    std::unordered_map<std::string, std::vector<std::string>> graph;

public:
    int ladderLength(std::string beginWord, std::string endWord, std::vector<std::string> &wordList)
    {
        std::vector<std::string> words = wordList; 
        words.push_back(beginWord); 
        int i = 0;
        for (std::string &s : words)
        {
            for (int j = 0; j < words.size(); j++)
            {
                if (i == j)
                    continue;

                if (is_adjacent(s, words[j]))
                    graph[s].push_back(words[j]);
            }
            i++;
        }
        std::queue<std::pair<std::string, int>> q; 
        std::unordered_set<std::string> seen; 
        q.push({beginWord, 1}); 
        seen.insert(beginWord); 
        while(!q.empty()){
            auto [str, steps] = q.front(); 

            q.pop(); 
            
            if(str == endWord)
                return steps; 

            for(auto& adj : graph[str]){
                if(!seen.contains(adj)){
                    seen.insert(adj); 
                    q.push({adj, steps + 1}); 
                }
            }
        }

        return 0; 


    }
    bool is_adjacent(std::string &a, std::string &b)
    {
        if (a.size() != b.size())
            return false;
        int diff = 0;
        for (int i = 0; i < a.size(); i++)
            if(a[i]!= b[i]) {
                diff++; 

                if(diff > 1)
                    return false; 
            }

        return diff == 1;
    }
};