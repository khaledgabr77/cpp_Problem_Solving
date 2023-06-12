/*
If the ages of Ram, Sulabh and Ajay are input by the user
write a program to determine the youngest of the three.
*/

#include <iostream>

int main(){
    int Ram, Sulabh, Ajay;
    std::cout<<"Enter the age of Ram: ";
    std::cin>>Ram;
    std::cout<<"Enter the age of Sulabh: ";
    std::cin>>Sulabh;
    std::cout<<"Enter the age of Ajay: ";
    std::cin>>Ajay;
    
    if(Ram<Sulabh && Ram<Ajay){
        std::cout<<"The youngest age is Ram" << std::endl;
    }
    else if(Ajay<Sulabh){
        std::cout<<"The youngest age is Ajay" << std::endl;
    }
    else{
        std::cout<<"The youngest age is Sulabh" << std::endl;
    }
    return 0;
    
}
