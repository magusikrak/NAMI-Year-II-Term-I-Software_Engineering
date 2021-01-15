#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double YEN_PER_DOLLAR = 83.14, EUROS_PER_DOLLAR = 0.733;
    cout << fixed << setprecision(3);
    double dollar = 0.0;
    cout << "Enter dollar:";
    cin >> dollar;
    cout << "Your yen will be: " <<  YEN_PER_DOLLAR * dollar << endl << "Your euro will be: " << EUROS_PER_DOLLAR * dollar;
    return(0);
}
