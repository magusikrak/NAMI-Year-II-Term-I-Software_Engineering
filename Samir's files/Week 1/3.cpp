#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double celcius, farenheit;
    cout << "Please enter celcius that you want to convert: ";
    cin >> celcius;
    farenheit = (9.0/5) * celcius + 32;
    cout << celcius << " celcius is " << farenheit << " farenheit";
    return(0);
}
