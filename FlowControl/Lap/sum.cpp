/*
Program to calculate sum of numbers from m to n.
Hint: Input two numbers m and n. Find sum of all numbers from m to n.
For example m=3 and n=8 then sum will be 3 + 4 + 5 + 6 + 7 + 8 = 33.
*/

#include <iostream>


int main(){


    int n, m;
    std::cout << " Enter numbers: " << std::endl;
    std::cin >> n >> m;

    int sum = 0;
    
    for(int i = n; i <= m; i++){
        sum += n;
    } 
    std::cout << sum << std::endl;
    return 0;
}