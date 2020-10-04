#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, d, e;
    cout << "enter the scores in the sequential order: \n";
    cin >> a >> b >> c >> d >> e;
    float avg=(a+b+c+d+e)/5.0;
    cout<<endl;
    cout<<"the average is "<<fixed<<setprecision(1)<<avg<<endl;
    return 0;
}