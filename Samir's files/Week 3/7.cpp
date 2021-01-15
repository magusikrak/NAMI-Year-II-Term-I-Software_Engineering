#include<iostream>
using namespace std;
double kgConverter(double);
int main(){
    double pound;
    cout << "How much pound do you want to convert to kg: ";
    cin >> pound;
    double kg = kgConverter(pound);
    cout << pound << " pound is " << kg << " kg";
}

double kgConverter(double pound){
    double kg = 0.453592 * pound;
    return kg;
}
