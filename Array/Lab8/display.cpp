/*
Write a program to display an array elements.
*/

#include <iostream>

int main(){

    int size;
    std::cout << "Enter the size of the array" << std::endl;
    std::cin >> size;
    int arr[size];
    std::cout << "Enter array elemnts: " << std::endl;

    for(int i = 0; i < size; i++){
        std::cin >> arr[i];
        
    }
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << std::endl;
    }
    return 0;

}