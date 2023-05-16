/*
Write C++ menu driven program to get employee details, display employee details,
 and display monthly salary details of employee.
*/


#include <iostream>
#include <string>

class Student{
  
  private:
    std::string Student_ID;
    std::string Student_Name;
    double OOP2_Score; 
    double Maths_Score;
    double English_Score;
    double Total_Score;

    double ctotal(){
        
        Total_Score = English_Score + Maths_Score +OOP2_Score;

        return Total_Score;
    }
  public:
    void Takedata(){
        std::cout << "ID: ";
        std::cin >> Student_ID;
        std::cout << "Name: ";
        std::cin >> Student_Name;
        std::cout << "OOP2: ";
        std::cin >> OOP2_Score;
        std::cout << "Math: ";
        std::cin >> Maths_Score;
        std::cout << "English: ";
        std::cin >> English_Score;
        ctotal();
    }
    void Showdata(){
        std::cout << "ID:  "<< Student_ID << std::endl;
        std::cout << "Name:  "<< Student_Name << std::endl;
        std::cout << "OOP2_Score:  " << OOP2_Score << std::endl;
        std::cout << "Math:  " << Maths_Score << std::endl;
        std::cout << "English:  " << English_Score << std::endl;
        std::cout << "Total Score:  " << Total_Score << std::endl;

    }

};

class Employee{

  private:
  std::string Employee_ID;
  std::string Employee_Name;
  int No_of_Hours_Work;
  int Rate_per_Hour;

  public:
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
    int choice;
    while(true){
        std::cout << "[1] Student" << std::endl;
        std::cout << "[2] Employee" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;
        
        if(choice == 1){
            std::cout << "Welcome to Student Class" << std::endl;
            Student st;
            st.Takedata();
            st.Showdata();
               
        }
        else if(choice == 2){
            std::cout << "Welcome to Employee Class" << std::endl;
            std::cout << "[1] Empolyee Details: " << std::endl;
            std::cout << "[2] Display Employee: " << std::endl;
            std::cout << "[3] Employee Salary: " << std::endl;

            std::cout << "Enter your choice: " << std::endl;            

            int emp_choice;
            std::cin >> emp_choice;
            if(emp_choice == 1){
                std::string id, name;
                int hw, rh;
                std::cout << "Employee ID: " << std::endl;
                std::cin >> id;
                std::cout << "Employee Name: " << std::endl;
                std::cin >> name;
                std::cout << "Employee Working Hours: " << std::endl;
                std::cin >> hw;
                std::cout << "Employee Rate per Hour: " << std::endl;
                std::cin >> rh;
                Employee emp;
                emp.setEmployee_ID(id);
                emp.setEmployee_Name(name);
                emp.setNo_of_Hours_Work(hw);
                emp.setRate_per_Hour(rh);
            }
            else if(emp_choice == 2){
                Employee emp;
                std::cout << "ID: " << emp.getEmployee_ID() << std::endl;
                std::cout << "Name: " << emp.getEmployee_Name() << std::endl;
                std::cout << "Working Hours: "<< emp.getNo_of_Hours_Work() << std::endl;
                std::cout << "Rate per Hour: " << emp.getRate_per_Hour() << std::endl;

            }
            else if(emp_choice == 3){
                Employee emp;
                std::cout << "The Total is: " << emp.getTotal_Monthly_Salary() << std::endl;

            }

        }
        else{std::cout << "Invalid Choice" << std::endl;}
    } 

}