#include<iostream>
using namespace std;
int main()
{
    int a =10;
    int *b;
    b=&a;
    cout<<a<<endl;
    cout<< &a <<endl;
    cout<< b <<endl;
    cout<< &b <<endl;
    cout<< *b <<endl;
    return 0;   
}