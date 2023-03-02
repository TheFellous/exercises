//https://leetcode.com/problems/number-of-islands/?envType=study-plan&id=level-1
// 02/03/23
#include <iostream>
#include <vector> 
class Solution {
public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color)
    {
        int initial = image[sr][sc]; 
        if (initial == color) return image; 
        transform(image, sr, sc, color, initial); 
        return image; 
    }
    void transform (std::vector<std::vector<int>> &image, int i, int j, int color, int initial)  
    {
        image[i][j] = color; 
    
        if(i + 1 < image.size() && image[i + 1][j] == initial)     transform(image, i + 1, j, color, initial); 
        if(i - 1 >= 0 && image[i - 1][j] == initial)               transform(image, i - 1, j, color, initial); 
    
        if(j + 1 < image[0].size() && image[i][j + 1] == initial)  transform(image, i, j + 1, color, initial); 
        if(j - 1 >= 0 && image[i][j - 1] == initial)               transform(image, i, j - 1, color, initial);     
    }
};