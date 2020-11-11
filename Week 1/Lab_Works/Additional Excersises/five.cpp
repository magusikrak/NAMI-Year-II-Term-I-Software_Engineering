#include <iostream>
#include <iomanip>
using namespace std;
// DEFINE
const float PI = 3.14;
float calculateSlices(float radius);
float calculatePizza(float numberOfSlices,int people);
float calculatePizza(float numberOfSlices,int people){
    float pizza=(numberOfSlices/(people*4));
    return pizza;
}

int main()
{
    float diameterOfPizza;
    float numberOfSlices;
    int numberOfPeople;
    float numberOfPizza;
    cout << "please enter the diameter of pizza in inches " << endl;
    cin >> diameterOfPizza;
    diameterOfPizza /= 2;
    numberOfSlices = calculateSlices(diameterOfPizza);
    cout<<"please enter the number of people who will attend this party. ";
    cin>>numberOfPeople;
    numberOfPizza=calculatePizza(numberOfSlices,numberOfPeople);
    cout << fixed << setprecision(1) <<"the Number of pizza is "<< numberOfPizza;
}
float calculateSlices(float radius)
{
    // cout<<radius;
    float areaOfPizza;
    areaOfPizza = radius * radius * PI;
    float slices = areaOfPizza / 14.125;

    return slices;
}