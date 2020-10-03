#include<iostream>
using namespace std;
float fahreneit(int num);

int main() {
    float p=fahreneit(36);
    cout<<p;
    return 0;
}

float fahreneit(int num)
{
    float c;
    c=((9.0/5)*num)+32;
    return c;
}