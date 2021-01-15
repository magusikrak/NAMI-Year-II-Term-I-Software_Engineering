#include<iostream>
using namespace std;
int main(){
  double m1, m2, m3, average;
  string month1, month2, month3;
  //First month
  cout << "Enter your month name: ";
  cin >> month1;
  cout << "Enter " << month1 << " average rainfall: ";
  cin >> m1;
  //Second Month
  cout << "Enter your month name: ";
  cin >> month2;
  cout << "Enter " << month2 << " average rainfall: ";
  cin >> m2;
  //Third month
  cout << "Enter your month name: ";
  cin >> month3;
  cout << "Enter " << month3 << " average rainfall: ";
  cin >> m3;

  //Calculation
  average = (m1+m2+m3) / 3.0 ;
  cout << "The average rainfall of " << month1 << ", " << month2 << ", " << month3 << " is " << average;
  return(0);
}
