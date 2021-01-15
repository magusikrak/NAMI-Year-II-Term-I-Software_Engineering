#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double diameter, slices, people, pizza;
  cout << "Enter the diameter of the pizza: ";
  cin >> diameter;
  cout << "Enter no. of people: ";
  cin >> people;
  double area = (22.0/7.0) * (diameter/2) * (diameter/2)
  slices = area / 14.125;
  cout << setprecision(3);
  cout << "The pizza can be divided into " << slices << "slices";
}
