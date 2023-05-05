// Write the output of the following program :

#include <iostream>
using namespace std;
void X(int &A, int &B)
{
    A = A + B;
    B = A - B;
    A = A - B;
}
int main()
{
    int a = 4, b = 18;
    X(a,b);
    cout << a << ", " << b;
    return 0;
}