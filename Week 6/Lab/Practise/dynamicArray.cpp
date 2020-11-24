#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    // int Arr[size];
    int *Arr;
    Arr=new int[size];
    cout<<sizeof Arr<<endl;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    Arr=new int[size];

    cout<<sizeof Arr<<endl;
    return 0;   
}