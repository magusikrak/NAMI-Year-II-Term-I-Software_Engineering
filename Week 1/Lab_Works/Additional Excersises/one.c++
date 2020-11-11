#include <iostream>
using namespace std;
float calculateAverage(string name[3], float rainfall[3]);
float calculateAverage(string name[3], float rainfall[3])
{
    float avg;
    for (int i = 0; i < 3; i++)
    {
        avg += rainfall[i];
    }
    avg /= 3;
    return avg;
}
int main()
{
    string nameOfMonths[3];
    float amountOfRain[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter the name of the Month" << endl;
        cin >> nameOfMonths[i];
        cout << "Please enter the amount of rainfall in the month " << nameOfMonths[i] << endl;
        cin >> amountOfRain[i];
    }
    float average = calculateAverage(nameOfMonths, amountOfRain);
    cout << "the average rainfall for the months ";
    for (int i = 0; i < 3; i++)
    {
        cout << nameOfMonths[i] << " ";
    }
    cout << "is" << average;

    return 0;
}