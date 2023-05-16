/*Write C++ header file Employee.h with class Employee with following details.

Employee
---
- Employee_ID: String
- Employee_Name: String
- No_of_Hours_Work: int
- Rate_per_Hour: int
---
+ setEmployee_ID(String)
+ getEmployee_ID(): String
+ setEmployee_Name(String)
+ getEmployee_Name(): String
+ setNo_of_Hours_Work(int)
+ getNo_of_Hours_Work(): int
+ setRate_per_Hour(int)
+ getRate_per_Hour(): int 
+ getTotal_Monthly_Salary(): double
*/

#include <iostream>
#include <string>

class Employee{

  private:
  std::string Employee_ID;
  std::string Employee_Name;
  int No_of_Hours_Work;
  int Rate_per_Hour;

  public:
    // std::cout << "Employee ID: " << std::endl;
    // std::cin >> Employee_ID;
    // std::cout << "Employee Name: " << std::endl;
    // std::cin >> Employee_Name;
    // std::cout << "No of Hours working: " << std::endl;
    // std::cin >> No_of_Hours_Work;
    // std::cout << "Rate Per Hour: " << std::endl;
    // std::cin >> Rate_per_Hour;
    void setEmployee_ID(std::string id){
        Employee_ID = id;
    }
    std::string getEmployee_ID(){
        return Employee_ID;
    }
    void setEmployee_Name(std::string name){
        Employee_Name = name;
    }
    std::string getEmployee_Name(){
        return Employee_Name;
    }
    void setNo_of_Hours_Work(int hw){
        No_of_Hours_Work = hw;
    }
    int getNo_of_Hours_Work(){
        return No_of_Hours_Work;
    }
    void setRate_per_Hour(int rh){
        Rate_per_Hour = rh;
    }
    int getRate_per_Hour(){
        return Rate_per_Hour;
    }
    double getTotal_Monthly_Salary(){
        return No_of_Hours_Work * Rate_per_Hour;
    }
};
int main(){
    Employee emp;
    emp.setEmployee_ID("2014");
    emp.setEmployee_Name("Khaled");
    emp.setNo_of_Hours_Work(20);
    emp.setRate_per_Hour(100);
    std::cout << emp.getTotal_Monthly_Salary() << std::endl;
    return 0;
}