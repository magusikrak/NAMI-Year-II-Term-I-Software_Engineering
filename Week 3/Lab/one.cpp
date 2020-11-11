#include<iostream>
using namespace std;
int getDistance(int ,int);
int getDistance(int speed,int time)
{
    return speed*time;
}
int main()
{
    int speed,time;
    cout<<"enter the speed of the vehicle:"<<endl;
    cin>>speed;
    cout<<"enter the time taken"<<endl;
    cin>>time;
    int distance=getDistance(speed,time);
    cout<<"The distance is "<<distance<<endl;
    return 0;
}