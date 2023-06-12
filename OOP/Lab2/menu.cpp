#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

#include "triangle.hpp"


class Person{
  private:
    std::string name;
    int age;

  public:
    Person(){
        age = 29;
        name = "Khaled";
    }
    Person(int age_) : age{age_}{
        name = "Khaled";
    }
    void Display(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;

    }
};

class Records{
  private:
    std::string name;
    double salary;
    std::string date_of_birth;
  public:
    Records(){
        name = "Khaled";
        salary = 13000;
        date_of_birth = "16/09/1992";
    }
    Records(const std::string& name_, double salary_, const std::string& date_of_birth_) : name(name_), salary(salary_), date_of_birth(date_of_birth_){}

    void Display(){
        std::cout << "Name: " << name <<std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << "Date of Birth: " << date_of_birth << std::endl;
    }
    void alter_name(){
        std::cout << "New Name: ";
        std::cin >> name;
    }
    void alter_salary(){
        std::cout << "New Salary: ";
        std::cin >> salary;
    }
    void alter_date(){
        std::cout << "New Date of Birth: ";
        std::cin >> date_of_birth;
    }    
};

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

Triangle::Triangle(double height_ = 0, double base_ = 0){}
void Triangle::setHeight(double height_){height = height_;}
double Triangle::getHeight() {return height;}

void Triangle::setBase(double base_){base = base_;}
double Triangle::getBase() {return base;}

double Triangle::getArea() {return (base * height) / 2;}
double Triangle::getPerimeter() {
    return (base+height) + (sqrt(pow(base,2)) + sqrt(pow(height, 2)));
}

int main(){


    int choice;
    std::cout << "[1] Person Class " << std::endl;
    std::cout << "[2] Record Class " << std::endl;
    std::cout << "[3] Account Class " << std::endl;
    std::cout << "[4] Triangle Class " << std::endl;
    std::cout << "ENTER YOUR CHOICE " << std::endl;

    std::cin >> choice;

    while(true){
        if(choice == 1){
            //system("clear");
            int x;
            std::cout << "Enter age: ";
            std::cin >> x;
            Person person1, person2(x);
            person1.Display();
            std::cout << std::endl;
            person2.Display();
        }
        else if(choice == 2){
            //system("clear");
            std::string x,y;
            int i;
            std::cout << "Enter a Name: ";
            std::cin >> x;
            std::cout << std::endl;
            std::cout << "Enter the Date: ";
            std::cin >> y;
            std::cout << std::endl;
            std::cout << "Enter a Salary: ";
            std::cin >> i;

            Records record1;
            Records record2(x,i,y);
            record1.Display();
            record2.Display();

            std::cout << std::endl;
            
            Records *ptr = &record1;
            ptr->alter_name();
            ptr->alter_salary();
            ptr->alter_date();

            record1.Display();
            record2.Display();
        }
        else if(choice == 3){
            //system("clear");
            Account acc;
            acc.Display();
            acc.~Account();
        }
        else if(choice == 4){
            //system("clear");
            int height, base;
            std::cout << "Enter the height: " << std::endl;
            std::cin >> height;
            std::cout << "Enter the base: " << std::endl;
            std::cin >> base;
            Triangle tri(height, base);
            tri.setBase(base);
            tri.setHeight(height);
            std::cout << "Area: " << tri.getArea() << std::endl;
            std::cout << "Perimeter: " << tri.getPerimeter() << std::endl;
        }
        else{
            //system("clear");
            std::cout << "Please try again: " << std::endl;
            main();
        }
    }


    return 0;
}