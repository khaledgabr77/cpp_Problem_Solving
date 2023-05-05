//Write the output of the following program:

#include <iostream>
using namespace std;
void Execute(int &B, int C = 100)
{
    int temp = B + C;
    B += temp;
    if (C == 100)
        cout << temp << " " << B << " " << C << endl;
}
int main()
{ 
    int M = 90, N = 10;
    Execute(M);
    cout << M << " " << N << endl;
    Execute(M, N);
    cout << M << " " << N << endl;
    return 0;
}