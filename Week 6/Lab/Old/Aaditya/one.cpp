#include <iostream>
using namespace std;
int main()
{
int x;
int y;
int *p;
int *q;
x = 44;
y = 71;
p = &x;
q = &y;
*q = 22;
*p = 45;
y = x;
*p = *q;
cout << x << " "<< y << endl;
cout << *p << " " << *q << endl;
return 0;
}