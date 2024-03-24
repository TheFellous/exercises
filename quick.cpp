#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums, std::vector<int>& Z) 
    {
        quick(nums, 0, nums.size() - 1, Z); 
        return nums; 
    }
private: 
    void quick(std::vector<int>& nums, int lo, int hi, std::vector<int>& Z)
    {
        if(hi <= lo) return; 
        int p = partition(nums, lo, hi, Z); 
        quick(nums, lo, p - 1, Z); 
        quick(nums, p + 1, hi, Z); 
    }
    int partition(std::vector<int>& nums, int lo, int hi, std::vector<int>& Z)
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
    std::vector<int> Z = {}; 
    for(int i = 0; i < a.size(); i++)
        Z.push_back(i); 
    Solution *sol = new Solution; 
    a = sol->sortArray(a, Z); 
    delete sol; 

    for(int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
 
    return 0;
}