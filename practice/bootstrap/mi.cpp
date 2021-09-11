#include <iostream>
using namespace std;
 
int findGCD(int a, int b, int* x, int* y);
 
void Modularinverse(int a, int m)
{
    int x, y;
    int g = findGCD(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
         
        int inverse = (x % m + m) % m;
        cout << "Modular multiplicative inverse is " << inverse;
    }
}
 
int findGCD(int a, int b, int* x, int* y)
{
     
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
     
    int x1, y1;
    int GCD = findGCD(b % a, a, &x1, &y1);
 
    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return GCD;
}
 
int main()
{
    int a,m;

    cin>>a>>m;
   
    Modularinverse(a, m);
    return 0;
}
 