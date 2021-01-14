/**
 * @file Pr7-1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-14
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <iostream>
/**
 * @brief 
 * 
 */
using namespace std;

int main()
{
   /**
    * @brief 
    * 
    */
   const int NUM_EMPLOYEES = 6;
   int hours[NUM_EMPLOYEES];

   // Get the hours worked by each employee.
   /**
    * @brief 
    * 
    */

   cout << "Enter the hours worked by "
        << NUM_EMPLOYEES << " employees: ";
   cin >> hours[0];
   cin >> hours[1];
   cin >> hours[2];
   cin >> hours[3];
   cin >> hours[4];
   cin >> hours[5];
   /**
    * @brief 
    * 
    */
   // Display the values in the array.
   cout << "The hours you entered are:";
   cout << " " << hours[0];
   cout << " " << hours[1];
   cout << " " << hours[2];
   cout << " " << hours[3];
   cout << " " << hours[4];
   cout << " " << hours[5] << endl;
   /**
    * @brief 
    * 
    */
   return 0;
}