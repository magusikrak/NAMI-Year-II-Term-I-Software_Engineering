#include<iostream>
using namespace std;
int main()
{
    int numbers[10]={};
    int larger=0;
    int smaller=0;
    int equal=0;
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"enter the number"<<endl;
        cin>>numbers[i];
    }
    for(int j=0;j<10;j++)
    {
        // cout<<numbers[j]<<endl;
        if(numbers[i]>50)
        {
            greater++;
        }
        else if(numbers[j]<50)
        {
            smaller++;
        }
        else
        {
            equal++;
        }
        
    }
    
    return 0;
}