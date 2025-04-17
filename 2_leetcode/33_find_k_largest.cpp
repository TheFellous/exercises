#include <bits/stdc++.h>

class Solution {
    public:
        int findKthLargest(std::vector<int>& nums, int k) {
            std::priority_queue<int> mHeap(nums.begin(), nums.end()); 

            for(int i = 0; i < k-1; i++)
                mHeap.pop(); 

            return mHeap.top(); 

        }
    };