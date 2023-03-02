// https://leetcode.com/problems/fibonacci-number/description/?envType=study-plan&id=level-1
// 02/03/2023
class Solution {
public:
    int fib(int n)
    {
        if(n <= 1) return n;  
        return fib(n - 1) + fib(n - 2); 
    }
};