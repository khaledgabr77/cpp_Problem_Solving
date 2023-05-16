/*
Write a program to merge to sorted arrays.
a1[10] = [25, 27, 32, 98]
a2[10] = [12, 23, 28, 51, 72, 85, 97]
then a3[20] should be equal to = [12, 23, 25, 27, 28, 32, 51, 72, 85, 97, 98]
*/

#include <iostream>
#include <algorithm>

int main() {
    
    int array1[] = {25, 27, 32, 98};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {12, 23, 28, 51, 72, 85, 97};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    // Merge the two arrays
    std::merge(array1, array1 + size1, array2, array2 + size2, mergedArray);

    // Sort the merged array
    std::sort(mergedArray, mergedArray + mergedSize);

    // Print the sorted merged array
    std::cout << "Sorted merged array: ";
    for (int i = 0; i < mergedSize; i++) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
