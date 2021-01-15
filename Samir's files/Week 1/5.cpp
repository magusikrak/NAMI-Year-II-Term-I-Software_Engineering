#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     double math, english, science, computer, social, total, average;
     cout << "Enter your marks in Math:";
     cin >> math;
     cout << "Enter your marks in English:";
     cin >> english;
     cout << "Enter your marks in Science:";
     cin >> science;
     cout << "Enter your marks in Social:";
     cin >> social;
     cout << "Enter your marks in Computer:";
     cin >> computer;
     total  = math + science + computer + english + social;
     average = total / 5;
     cout << "Your average is " << total;
     return(0);
}
