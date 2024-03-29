#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) 
    {
        quick(nums, 0, nums.size() - 1); 
        return nums; 
    }
private: 
    void quick(std::vector<int>& nums, int lo, int hi)
    {
        if(hi <= lo) return; 
        int p = partition(nums, lo, hi); 
        quick(nums, lo, p - 1); 
        quick(nums, p + 1, hi); 
    }
    int partition(std::vector<int>& nums, int lo, int hi)
    {  
        int i = lo - 1, j = hi, v = nums[hi], temp = 0; 

        while(true){
            while(nums[++i] < v){
                if(i == hi) break; 
            }
            while(v < nums[--j]){
                if(j == lo) break; 
            }
            if(i >= j) break; 

            temp = nums[i]; 
            nums[i] = nums[j]; 
            nums[j] = temp; 
        }
        temp = nums[hi]; 
        nums[hi] = nums[i]; 
        nums[i] = temp; 

        return i; 
    }
};
int main() {
    std::vector<int> a = {5, 9, 3, 2, 8, 7, 11}; 
    Solution *sol = new Solution; 
    a = sol->sortArray(a); 
    delete sol; 

    for(int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
 
    return 0;
}
