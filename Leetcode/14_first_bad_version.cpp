// https://leetcode.com/problems/first-bad-version/description/?envType=study-plan&id=level-1
// 28/02/23
#include <iostream>

// The API isBadVersion is defined for you.
 bool isBadVersion(int version);


class Solution {
public:
    int firstBadVersion(int n) {
        return taker(0, n); 
    }
    
private:
    int taker(long long int front, long long int end)
     {
        long long int mid = (front + end)/2;     

        if(end == front + 1) 
            return end;
        if(isBadVersion(mid))
            end = mid; 
        else
            front = mid; 
        return taker(front, end); 
    }
};