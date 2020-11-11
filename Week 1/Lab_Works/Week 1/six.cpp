#include <iostream>
#include <iomanip>
using namespace std;
#define YEN_PER_DOLLAR  83.14;
#define EUROS_PER_DOLLAR  0.7337;

int main()
{
    float dollars;
    cout << "enter the total amount in dollars\n";
    cin >> dollars;
    float toEuros;
        toEuros = dollars * EUROS_PER_DOLLAR;
    float toYen;
        toYen = dollars * YEN_PER_DOLLAR;
    cout<<fixed<<setprecision(2)<<"the amount in euros is "<<toEuros<<" and to yen is "<<toYen<<endl;
    return 0;
}
