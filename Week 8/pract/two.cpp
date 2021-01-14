#include <iostream>
using namespace std;
struct Rainfall
{
    int totalRainfall, highTemperature, lowTemperature, averageTemperature;
};

void calculateHighest(int []);
void calculateLowest(Rainfall);
void calculateAverage(Rainfall);

void calculateHighest(int rain)
{
    int highestRainfall=rain[0];

}
// void calculateLowest(Rainfall);
// void calculateAverage(Rainfall);
int main()
{
    Rainfall rain[12];
    for (int i = 0; i < 12; i++)
    {
        cout << "enter the total rainfall for month " << i + 1 << endl;
        cin >> rain[i].totalRainfall;
        while (true)
        {
            cout << "enter the high temperature for month " << i + 1 << endl;
            cin >> rain[i].highTemperature;
            if (rain[i].highTemperature < 140 && rain[i].highTemperature > -100)
            {
                break;
            }
        }
        while (true)
        {
            cout << "enter the low temperature for month " << i + 1 << endl;
            cin >> rain[i].lowTemperature;
            if (rain[i].lowTemperature < 140 && rain[i].lowTemperature > -100)
            {
                break;
            }
        }
        rain[i].averageTemperature = (rain[i].highTemperature + rain[i].lowTemperature) / 2;
    }

    return 0;
}