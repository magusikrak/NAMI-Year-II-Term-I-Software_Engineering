#include<iostream>
using namespace std;
int main()
{
    int times;
    cout<<"Enter an integer"<<endl;
    cin>>times;
    for(int i=0;i<times;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
}