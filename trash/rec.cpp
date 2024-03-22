#include <iostream>
int sum_digits(int n)
{
    if(n==0) return 0; 
    return n%10 + sum_digits(n/10); 
}
void print_n(int n){
    if(n == 0) return;  
    print_n(n-1); 
    for(int i = 1; i <= n; i++)
        std::cout << i << ' '; 
    std::cout << '\n'; 
}
int main(){

    std::cout << sum_digits(1459)<< "\n \n ";

    print_n(5); 
}
// 1459 -> 1 + 4 + 5 + 9 
