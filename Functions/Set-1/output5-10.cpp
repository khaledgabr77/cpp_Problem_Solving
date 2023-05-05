//Write the output of the following program :

#include <iostream>
using namespace std;
static int i = 100;
void abc()
{
    static int i = 8;
    cout << "first = " << i++ << endl;
}
int main()
{
    static int i = 2;
    abc();
    cout << "second = " << i << endl;
    abc();
    return 0;
}