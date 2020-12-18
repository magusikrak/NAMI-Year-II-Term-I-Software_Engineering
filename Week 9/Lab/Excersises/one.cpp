/**
 * @file one.cpp
 * @author Sugam Karki (sugamkarki7058@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-18
 * 
 * @copyright Copyright (c) 2020
 * 
 * @subject
 * @tutor
 */
#include <iostream>
using namespace std;
void sign(int);
int main()
{
    sign(5);
    return 0;
}
void sign(int n)
{
    if (n != 0)
    {
        cout << n << "\tNo Parking\n";
        sign(n - 1);
    }
}