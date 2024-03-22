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
        if(hi - lo <= 0) return; 
        int p = partition(nums, lo, hi); 
        quick(nums, lo, p - 1); 
        quick(nums, p + 1, hi); 
    }
    int partition(std::vector<int>& nums, int lo, int pivot)
    {  
        int temp = 0, i = lo, j = pivot - 1; 

        while(i < j && i < pivot && j >= lo) { // Added boundary checks
            while(nums[i] < nums[pivot]){
                i++;
                if(i == pivot) break; 
            }
                
            while(nums[j] > nums[pivot]){
                j--;
                if(j == lo) break; 
            }
            
            if(i < j){    
                temp = nums[j]; 
                nums[j] = nums[i]; 
                nums[i] = temp;  
            }
        }
        temp = nums[j]; 
        nums[j] = nums[pivot];
        nums[pivot] = temp; 
        return j; 
    }


};
int main() {
    std::vector<int> a = {1, 4, 5, 8, 13, 6, 9, 4}; 
    Solution *sol = new Solution; 
    a = sol->sortArray(a); 
    delete sol; 

    for(int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
