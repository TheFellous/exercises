// https://leetcode.com/problems/unique-paths/?envType=study-plan&id=level-1
// 03/03/23
class Solution {
public:
    int uniquePaths(int m, int n)
    {
        long long int answer{1}; 

        for(int i = 1; i < n; i++)
            answer = (m - 1 + i) * answer/i; 

        return answer;      
    }
}; 


// (m + n - 2)!/((m-1)!*(n-1)!)