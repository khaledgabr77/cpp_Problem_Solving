/*
Write a program which accepts amount as integer and display total number of Notes of Rs. 500, 100, 50, 20, 10, 5 and 1.
For example, when user enter a number, 575,
the results would be like this...
500: 1
100: 0
50: 1
20: 1
10: 0
5: 1
1: 0
*/
#include <iostream>
int main(){

    int AMT, R500, R100, R50, R20, R10, R5, R1;

    std::cout<<"Enter amount of notes: ";
    std::cin>>AMT;

    R500 = AMT/500;
    AMT = AMT % 500;
    std::cout <<  AMT << std::endl; 

    R100 = AMT / 100;

    AMT = AMT % 100;  
    std::cout <<  AMT << std::endl;

    R50 = AMT/50;
    AMT = AMT % 50;
    std::cout <<  AMT << std::endl;

    R20 = AMT / 20;

    AMT = AMT % 20;
    std::cout <<  AMT << std::endl;
    
    R10 = AMT / 10;

    AMT = AMT % 10;
    std::cout <<  AMT << std::endl;
    R5 = AMT / 5;

    AMT = AMT % 5;
    std::cout <<  AMT << std::endl;

    R1 = AMT;
    std::cout<<"Rs.500 : "<<R500<<"\nRs.100 : "<<R100<<"\nRs. 50 : "<<R50<<
	"\nRs. 20 : "<<R20<<"\nRs. 10 : "<<R10<<"\nRs.  5 : "<<R5<<"\nRe.  1 : "<<R1;
    return 0; 
}