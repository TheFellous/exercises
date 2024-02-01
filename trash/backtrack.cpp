#include <iostream> 
const int row = 3, col = 3; 
int answ[row][col];



int brute(int row, int col){
    if(row == 0 && col == 0) return 1;
    int ans = 0; 

    if(row > 0) ans+= brute(row-1, col); 
    if(col > 0) ans+= brute(row, col-1); 

    return ans; 
}
int dp(int row, int col){
    if(row == 0 && col == 0) return 1; 
    if(answ[row][col] != -1) return answ[row][col]; 
    int cur = 0; 

    if(row > 0) cur+= dp(row-1, col); 
    if(col > 0) cur+= dp(row, col-1); 

    answ[row][col] = cur; 
    return cur; 

}

int main(){
    for(int i = 0; i < col; i++)
        for(int j = 0; j < row; j++)
            answ[i][j] = -1; 
    
    std::cout << brute(2, 2) << "\n \n "; 
}