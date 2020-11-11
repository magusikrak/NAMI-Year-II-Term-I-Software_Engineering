#include <iostream>
using namespace std;
int main()
{
    int numberOfCookies;
    float caloriesPerCookies = (10.0 / 40.0) * 300;
    cout << "how many cookies did you gobble, Mr gamsy?" << endl;
    cin >> numberOfCookies;
    cout << "the number of calories you just had is ";
    cout << (caloriesPerCookies * numberOfCookies)<<".";
    return 0;
}