// Write the output of the following program:

#include <iostream>
using namespace std;
int func(int &x, int y = 10)
{
    if (x % y == 0)
        return ++x;
    else 
        return y--;
}
int main()
{
    int p = 20, q = 23;
    q = func(p, q);
    cout << p << " " << " " << q << endl;
    p = func (q);
    cout << p << " " << " " << q << endl;
    q = func (p);
    cout << p << " " << " " << q << endl;
    return 0;
}