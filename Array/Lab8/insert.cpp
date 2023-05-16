/*
Write a program to insert an element to an array.
*/

#include <iostream>

int main(){

    int arr[15];
    int value, pos, size = 10;
    std::cout << "Enter array element: " << std::endl;

    for(int i=0; i<10; i++){
        std::cout << "arr[ " << i << " ] = " << std::endl;
        std::cin >> arr[i];
    }
    
    std::cout << "Enter element to be inserted: " << std::endl;
    std::cin >> value;
    std::cout << "At which position: " << std::endl;
    std::cin >> pos;
    
    for(int i = 10; i > pos; i--){
        arr[i] = arr[i-1];

    }
    arr[pos] = value;


    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}