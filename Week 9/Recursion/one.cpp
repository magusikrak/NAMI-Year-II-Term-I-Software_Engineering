#include<iostream>
using namespace std;
void sign(int);
int main()
{
    sign(4);
    return 0;   
}

void sign(int a){
    if(a>0){
        cout<<"No Parking"<<endl;
        sign(a-1);
    }
}