/*
Note: In class diagram + for public, - for private.

Program 1
The class Person with private attributes name(string) and age(int).

The class contains three functions.

One with no parameter (for initializing default value).
With two parameter (one parameter with default value).
Function to display the data.
Person
---
- Name: String
- Age: int
---
+ Display()
<constructor> + Person()
<constructor> + Person(a: int)
*/

#include <iostream>
#include <string>
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
int main(){
    Person pr;
    Person pr2(33);
    pr.Display();
    pr2.Display();

    
    return 0;
}