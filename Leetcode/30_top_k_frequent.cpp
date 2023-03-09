// https://leetcode.com/problems/top-k-frequent-words/?envType=study-plan&id=level-1
// 08/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k) {
        std::map<std::string, int> mapa;
        std::vector<std::string> answ; 
        std::vector<std::set<std::string>> aux(100);

        for(std::string str : words)
        {
            if(mapa.count(str)) 
                mapa[str]++,
                aux[mapa[str]].insert(str), 
                aux[mapa[str] - 1].erase(str); 
            else
                mapa[str] = 1,
                aux[1].insert(str); 
        }
        if (k == 0) return answ; 
        for(int i = aux.size() - 1; i > 0; i--)
        {
            for (auto it = aux[i].begin(); it != aux[i].end(); ++it) {
                answ.push_back(*it);
                if(answ.size() == k) return answ;
            }
        }
        return answ; 
    }
};




/*class Solution {
public:
    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k) {
        std::unordered_map<std::string, int> freqMap;

        for (const std::string& word : words) ++freqMap[word];
        
        auto compare = [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
            return a.second == b.second ? a.first > b.first : a.second < b.second;
        };
        std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, decltype(compare)> pq(compare);
        for (const auto& [word, freq] : freqMap) {
            pq.emplace(word, freq);
        }
        
        std::vector<std::string> result;
        while (k-- > 0 && !pq.empty()) {
            result.emplace_back(pq.top().first);
            pq.pop();
        }
        return result;
    }
};
    }*/