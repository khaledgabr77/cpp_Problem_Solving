/*
Define a class student with the following specification.

Student
---
- Student_ID: String
- Student_Name: String
- OOP2_Score: double
- Maths_Score: double
- English_Score: double
- Total_Score: double
---
- ctotal(): Function to calculate eng + math + OOP-2 with double return type.
+ Takedata(): Function to accept values for student id, Student Name, eng,
 OOP-2, maths and invoke ctotal() to calculate total.
+ Showdata(): Function to display all the data members on the screen.*/


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
int main(){
    Student st;
    st.Takedata();
    st.Showdata();
    return 0;
}