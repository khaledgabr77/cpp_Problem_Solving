/*
Write a program to determine whether the seller has made profit
or incurred loss.
Also determine how much profit he made or
loss he incurred. Cost price and selling price of an item
is input by the user
*/

#include <iostream>

int main(){
    int cost_price, sale_price;
    std::cout << "Enter cost price: ";
    std::cin >> cost_price;
    std::cout << "Enter sale price: ";
    std::cin >> sale_price;
    if(cost_price <= sale_price){
        std::cout << "Profit = " << sale_price - cost_price << std::endl;

    }
    else{
        std::cout << "Loss = " << cost_price - sale_price << std::endl;
    }
    return 0;
}