#include <bits/stdc++.h>

class Solution
{
public:
    int maximum69Number(int num)
    {   
        int x = num, pot=1; 
        int add = 0; 
        while(x > 0){
            if(x % 10 == 6)
                add = pot * 3;

            x = x/10; 
            pot = pot * 10; 
        } 

        return num + add; 
            
    }
};

/*

class Solution
{
public:
    int maximum69Number(int num)
    {   
        int x = num; 
        std::vector<int> digits; 
        while(x > 0){
            digits.push_back(x%10); 
            x = x/10; 
        }
        int answ = num; 
        for(int j = digits.size()-1; j >= 0; j--){
            if(digits[j] == 6){
                return answ + 3 * pot_10(j); 
            }
        }
        return answ;

    }
    int pot_10(int x){
        int answ = 1; 
        for(int i = 0; i < x; i++)
            answ*=10; 

        return answ; 
    }
};*/