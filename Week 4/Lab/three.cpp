/**
 * @file three.cpp
 * @author Sugam Karki (sugamkarki7058@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-14
 * @copyright Copyright (c) 2020
 * @tutor
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    string nameOfSalsa[5] = {"mild", "medium", "sweet", "hot", "ziesty"};
    int numberOfSoldSalsaJars[5] = {};
    int total = 0, highestSold = 0, lowestSold = 0, indexOfHighestSold = 0, indexOfLowestSold = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "How many jars of " << nameOfSalsa[i] << " did you sell?" << endl;
        cin >> numberOfSoldSalsaJars[i];
        if(numberOfSoldSalsaJars[i]<0)
        {
            cout<<"Negative numbers not allowed. Enter the same value again"<<endl;
            i--;
        }
        
    }
    highestSold = numberOfSoldSalsaJars[0];

    lowestSold = numberOfSoldSalsaJars[0];
    for (int i = 0; i < 5; i++)
    {
        if (numberOfSoldSalsaJars[i] > highestSold)
        {
            highestSold = numberOfSoldSalsaJars[i];
            indexOfHighestSold = i;
        }
        if (numberOfSoldSalsaJars[i] < lowestSold)
        {
            lowestSold = numberOfSoldSalsaJars[i];
            indexOfLowestSold = i;
        }
        total += numberOfSoldSalsaJars[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "the numbers of jars sold of " << nameOfSalsa[i] << " was " << numberOfSoldSalsaJars[i] << endl;
    }

    cout << "The Highest number of salsa Sold was " << highestSold << " jars of " << nameOfSalsa[indexOfHighestSold] << endl;
    cout << "The Lowest number of salsa Sold was " << lowestSold << " jars of " << nameOfSalsa[indexOfLowestSold] << endl;

    return 0;
}