#include <iostream>
using namespace std;
struct Rainfall
{

    double totalRainfall, highestRainfall, lowestRainfall, averageRainfall;
};

int main()
{
    Rainfall m[12];
    double highestRainfall = -100, lowestRainfall = 140, totalAverage = 0;
    int indexOfHighestRainfall = 0, indexOfLowestRainfall = 0;
    for (int i = 0; i < 12; i++)
    {
        int temp = i + 1;
        cout << "enter the total rainfall of the " << temp << " month" << endl;
        cin >> m[i].totalRainfall;
        cout << "enter the highest rainfall of the " << temp << " month" << endl;
        cin >> m[i].highestRainfall;
        cout << "enter the lowest rainfall of the " << temp << " month" << endl;
        cin >> m[i].lowestRainfall;
        m[i].averageRainfall = (m[i].highestRainfall + m[i].lowestRainfall) / 2;
        if (m[i].highestRainfall > highestRainfall)
        {
            highestRainfall = m[i].highestRainfall;
            indexOfHighestRainfall = i + 1;
        }
        if (m[i].lowestRainfall < lowestRainfall)
        {
            lowestRainfall = m[i].lowestRainfall;
            indexOfLowestRainfall = i + 1;
        }
        totalAverage += m[i].averageRainfall;
    }
    totalAverage /= 12;
    // for(int i=0;i<12;i++)
    // {
    cout << "the average monthly rainfall is: " << totalAverage << endl;
    cout << "the highest temp is: " << highestRainfall << "and it occured in " << indexOfHighestRainfall << "th month" << endl;
    cout << "the lowest temp is: " << lowestRainfall << " and it occured in " << indexOfLowestRainfall << "th month" << endl;

    // }

    return 0;
}