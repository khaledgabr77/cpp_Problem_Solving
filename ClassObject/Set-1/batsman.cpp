/*
Define a class batsman with the following specifications:
Private members:
bcode                            4 digits code number
bname                           20 characters
innings, notout, runs           integer type
batavg                          it is calculated according to the formula –
                                batavg =runs/(innings-notout)
calcavg()                       Function to compute batavg
Public members:
readdata()                      Function to accept value from bcode, name, innings, notout and invoke the function                                       calcavg()
displaydata()                   Function to display the data members on the screen.
*/

#include <iostream>

class Batsman{
  public:
    readdata(){

    }
    displaydata(){
        
    }
  private:
    char bname[20];
    int innings, runs, notout;
    calcavg();

};

int main(){}