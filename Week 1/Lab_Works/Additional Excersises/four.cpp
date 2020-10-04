#include <iostream>
#include <iomanip>
using namespace std;
// DEFINE
const float PI = 3.14;
float calculateSlices(float radius);
int main()
{
    float diameterOfPizza;
    float numberOfSlices;
    // float areaOfPizza;
    cout << "please enter the diameter of pizza in inches " << endl;
    cin >> diameterOfPizza;
    diameterOfPizza /= 2;
    numberOfSlices = calculateSlices(diameterOfPizza);
    cout << fixed << setprecision(1) << "the Number of Slices is " << numberOfSlices;
}
float calculateSlices(float radius)
{
    // cout<<radius;
    float areaOfPizza;
    areaOfPizza = radius * radius * PI;
    float slices = areaOfPizza / 14.125;

    return slices;
}