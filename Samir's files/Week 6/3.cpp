#include <iostream>

using namespace std;
int doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10 ;
    return x + y ;
}
int main(){
    int a = 3, b =5;
    int *c = &a;
    int *d = &b;

    cout << "Number: " << doSomething(*c, *d);

}