/*
Program 2
Construct a class to hold personnel records class name is Records.
Use the following data members, and keep them private:

string name;
float salary;
string date_of_birth;
Create two constructors, one to initialize the record with its necessary values and one default.

Create member functions to alter the individual’s name, salary, and date of birth.

Create two objects use one object to refer member function through pointer 
and other object will be accessing through dot operator.
*/

#include <iostream>
#include <string>

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
int main(){

    Records record1;
    Records record2("Oben", 20000, "20/10/1998");
    record1.Display();
    record2.Display();

    std::cout << std::endl;
    
    Records *ptr = &record1;
    ptr->alter_name();
    ptr->alter_salary();
    ptr->alter_date();

    record1.Display();
    record2.Display();

    return 0;
}