/*
. Write a program to calculate the total expenses. 
  Quantity and price per item are input by the user and discount of
 10% is offered if the expense is more than 5000.
*/

#include <iostream>

int main() {

    int total_expenses, quantity, price, discont;
    std::cout << "Enter quantity and price per item: ";
    std::cin >> quantity >> price;

    total_expenses = quantity * price;
    if(total_expenses > 5000){
        std::cout << "You have 10% discont" << std::endl;
        discont = total_expenses * 0.1;
        total_expenses -= discont;
        std::cout << "total_expenses After discont = " << total_expenses << std::endl;
    
    }
    else{
        std::cout << "total_expenses = " << total_expenses << std::endl;
    }
    return 0;
}