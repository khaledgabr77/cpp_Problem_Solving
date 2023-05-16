/*
Write a program to find average of array elements.
*/

#include <iostream>

int main(){

    int size;
    std::cout << "Enter the array size" << std::endl;
    std::cin >> size;

    int arr[size];
    int sum = 0;
    std::cout << "Enter the number of elements" << std::endl;
    for(int i = 0; i < size; i++){
        std::cin >> arr[i];

    }
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    std::cout << "Average is: " << sum / size << std::endl;

    return 0;
}