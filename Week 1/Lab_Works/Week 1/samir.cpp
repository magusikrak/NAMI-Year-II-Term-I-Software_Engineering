#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double celsius, farenheit;
    cout << "Please enter celsius that you want to convert:\n ";
    cin >> celsius;
    farenheit = (9.0 / 5) * celsius + 32;
    cout << celsius << " celsius is " << farenheit << " farenheit";
    return (0);
}