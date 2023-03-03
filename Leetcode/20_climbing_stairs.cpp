// https://leetcode.com/problems/climbing-stairs/?envType=study-plan&id=level-1
// 03/03/23
/*  as  each stair n can and will only be climbed by passing on a stair (n-1) or (n-2), (exclusively in one way(climbing 1 or 2 stairs) respectively),
    you know recursively that climbstairs(n) = climbstairs(n-1) + climbstairs(n-2), and that's a fibonacci sequence starting from
    first stair = 1, second stair = 2
*/
class Solution {
public:
    int climbStairs(int n){
        if (n <= 3) return n; 
        int first{1}, second{1}, end{0}; 

        for(int i = 1; i < n; i++)
            end = first + second,  
            first = second, 
            second = end;    

        return end; 
    }
};


/*
// first solution with overflow problem 
class Solution {
public:
    int climbStairs(int n)
    {
        long long int one_step = n, two_steps = 0, counter = 0;
        while(one_step >= 0)
        {
            counter = counter +  factorial(one_step + two_steps)/((factorial(one_step))*(factorial(two_steps))); 
            one_step -= 2; 
            two_steps++; 
        }
        return counter; 
    }
private: 
    long long int factorial(int n) {
        long long int fact = 1; 
        while(n > 1){
            fact = fact*n; 
            n--;
        } 
        return fact; 
    }
};
*/