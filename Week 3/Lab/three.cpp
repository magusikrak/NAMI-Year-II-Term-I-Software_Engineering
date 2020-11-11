#include <iostream>
using namespace std;
double pow(double, int);
double pow(double a, int p)
{
   
    return a*a;
}
int main()
{
    double a = 0.0;
    int p = 2;
    double sqr;
    cout << "enter a number \n";
    cin >> a;
    sqr = pow(a, p);
    cout<<sqr;
    return 0;
}