#include <iostream>
using namespace std;
double getDistance(double, double);
int main(){
    double speed, time;
    cout << "Enter speed in m/s: ";
    cin >> speed;
    cout << "Enter time in second: ";
    cin >> time;

    double distance = getDistance(speed, time);
    cout << "You will travel " << distance << " meter";
}

double getDistance(double speed, double time){
    double distance = speed * time;
    return(distance);
}
