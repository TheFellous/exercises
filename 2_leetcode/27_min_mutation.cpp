#include <bits/stdc++.h>

class Solution {
    public:
        int minMutation(std::string startGene, std::string endGene, std::vector<std::string>& bank) {
            std::unordered_set<std::string> valid(bank.begin(), bank.end());
            std::unordered_set<std::string> seen;
    
            std::queue<std::pair<std::string, int>> fila;
            fila.push({startGene, 0});
            seen.insert(startGene);
    
            while (!fila.empty()) {
                auto [curr, steps] = fila.front();
                fila.pop();
    
                if (curr == endGene) return steps;
    
                for (int i = 0; i < curr.size(); i++) {
                    for (char m : letter(curr[i])) {
                        std::string mutated = curr;
                        mutated[i] = m;
    
                        if (valid.contains(mutated) && !seen.contains(mutated)) {
                            fila.push({mutated, steps + 1});
                            seen.insert(mutated);
                        }
                    }
                }
            }
            return -1;
        }
    
        std::vector<char> letter(char c) {
            std::vector<char> all = {'A', 'C', 'G', 'T'};
            all.erase(std::remove(all.begin(), all.end(), c), all.end());
            return all;
        }
    };
    