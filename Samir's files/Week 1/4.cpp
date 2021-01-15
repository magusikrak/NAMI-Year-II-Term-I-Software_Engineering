#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     int classA, classB, classC, priceA = 15, priceB = 12, priceC = 9, total;
     cout << "How many ticket do you want for Class A: ";
     cin >> classA;
     cout << "How many ticket do you want for Class B: ";
     cin >> classB;
     cout << "How many ticket do you want for Class C: ";
     cin >> classC;
     total = (classA * priceA) + (classB * priceB) + (classC * priceC);
     cout << fixed << setprecision(3);
     cout << "Your total ticket price is: " << total;
     return(0);
  }
