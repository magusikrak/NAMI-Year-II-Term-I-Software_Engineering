#include <iostream>
using namespace std;
int main()
{
int x;
int y;
int *p;
int *q;
x = 123;
y = 76;
p = &x;
q = &y;
*q = 22;
*p = *q;
y = x;
cout << x << " "<< y << endl;
cout << *p << " " << *q << endl;
return 0;
}