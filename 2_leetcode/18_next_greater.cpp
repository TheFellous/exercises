#include <bits/stdc++.h>

class Solution
{
public:
    std::vector<int> nextGreaterElement(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::stack<int> helper;
        std::unordered_map<int, int> indexer;
        std::vector<int> answ;

        for (int i = 0; i < nums2.size(); i++)
        {
            while (!helper.empty() && nums2[helper.top()] < nums2[i])
            {
                indexer[nums2[helper.top()]] = i;
                helper.pop();
            }

            helper.push(i);
        }
        for (int i = 0; i < nums1.size(); i++)
        {
            if (indexer.contains(nums1[i]))
                answ.push_back(nums2[indexer[nums1[i]]]);
            
            else
                answ.push_back(-1);
        }

        return answ;
    }
};