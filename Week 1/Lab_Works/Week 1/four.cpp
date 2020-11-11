#include<iostream>
using namespace std;
int main()
{
    int ASeat,BSeat,CSeat;
    cout<<"enter the total sale of A seat"<<endl;
    cin>>ASeat;
    cout<<"enter the total sale of B seat"<<endl;
    cin>>BSeat;
    cout<<"enter the total sale of C seat"<<endl;
    cin>>CSeat;
    // cout<<ASeat<<BSeat<<CSeat;
    ASeat=15*ASeat;
    BSeat=12*BSeat;
    CSeat=9*CSeat;
    cout<<"The total sale of A seat is "<<ASeat<<" and the total sale of B Seat is "<<BSeat<<" whereas the total sales of C Seat is "<< CSeat<<endl;


    return 0;
}