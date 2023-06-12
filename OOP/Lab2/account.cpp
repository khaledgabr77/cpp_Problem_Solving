/*
Program 3
Write a class Account that represents your bank account.

It contains information like name(string), account number(string) and balance(float). (All are private)
Add constructors and destructors.
Create some objects,
Write a code to display message when it is created and similarly display message when it will be destroyed.
*/

#include <iostream>
#include <string>

class Account{
  
  private:
    std::string name;
    std::string account_number;
    double balance;
  
  public:
    Account(){
        name = "Khaled";
        account_number = "12345";
        balance = 0.0;
    }
    ~Account(){
        std::cout << "Destroyed" << std::endl;
    }

    void Display(){
        std::cout << "User Name: " << name << std::endl;
        std::cout << "Account Number: " << account_number << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};
int main(){

    Account acc;
    acc.Display();
    acc.~Account();
    return 0;
}