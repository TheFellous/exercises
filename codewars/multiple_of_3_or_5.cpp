// https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp
//easy  2/17/2023
int solution(int number) 
{
    int counter = 0; 
    for(int i = 0; i < number; i += 3) {
        counter += i; 
    }
    for(int i = 0; i < number; i += 5) {
        if (i%3 != 0 ) counter += i; 
    }
    return counter; 

}