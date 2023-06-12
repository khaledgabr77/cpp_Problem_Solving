/*
Write a function called zero_small() that has two integer arguments
being passed by reference and sets the smaller of the two numbers to 0.
Write the main program to access the function.
*/

#include <iostream>
/*
void zero_small(int &arg1, int &arg2) {
    if(arg1 < arg2){
        arg1 = 0;
    }
    else{
        arg2 =0;
    }

}
*/
void ayhaga(int& arg1, int& arg2 );

int main(){
    int x, y;
    std::cin >> x >> y;

    ayhaga(x,y);
    std::cout << x << " " << y << std::endl;


    /*
    int arg1, arg2;
    std::cout << "Enter number" << std::endl;
    std::cin >> arg1;
    std::cout << "Enter number" << std::endl;
    std::cin >> arg2;

    zero_small(arg1, arg2);
    std::cout << "First Number: " << arg1 << std::endl;
    std::cout << "Second Number: " << arg2 << std::endl;
    */
    return 0;

}
void ayhaga(int& arg1, int& arg2 ){
    arg1++; 
    arg2--;

}