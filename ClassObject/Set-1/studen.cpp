/*Define a class student with the following specification
Private members of class student
admno                        integer
sname                        20 character
eng. math, science           float
total                        float
ctotal()                     a function to calculate eng + math + science with float return type.
Public member function of class student
Takedata()                   Function to accept values for admno, sname, eng, science and invoke ctotal() to calculate total.
Showdata()                   Function to display all the data members on the screen
*/

#include <iostream>

class Student{

    public:
        void Takedata(){
            std::cout << "Enter the administrator: " << std::endl;
            std::cin >> admno;
            std::cout << "Enter the name: " << std::endl;
            std::cin >> sname;
            std::cout << "Enter marks in eng, sci, math: " << std::endl;
            std::cin >> eng >> science >> math;;
            total = ctotal();
        }
        void Showdata(){
            std::cout << "student Name: " << sname << std::endl;
            std::cout << "Admission number: " << admno << std::endl;
            std::cout << "Science: " << science << std::endl;
            std::cout << "Math: " << math << std::endl;
            std::cout << "English: " << eng << std::endl;
            std::cout << "Total: " << total << std::endl;
        }

    private:
        int admno;
        char sname[20];
        float science, math, eng;
        float total;
        float ctotal(){

            return science + math +eng;

        }
};
int main(){
    Student st;
    st.Takedata();
    st.Showdata();
    return 0;
    

}