#include<iostream>
using namespace std;
double getHighest(double[], int)
double getLowest(double[], int;
double getTotal(double[], int);
double getAverage(double[], int);
int main(){
  const int SIZE = 12;
  double rainfall[SIZE];
  double high[], low[];
  for (int i = 0; i < SIZE; i++) {
    cout << "Enter month " << i << " rainfall: ";
    cin >> rainfall[i];
  }
  high[] = getHighest(rainfall[], SIZE);
  cout << "Highest rainfall was in " << high[1];
}

double getHighest(double a[], int n){
  highest = a[0];
  month = 0;
  for(int i = 0; i < n; i++){
    if(highest < a[i]){
      highest = a[i];
      month = i;
    }
    return {highest, month};
  }
}

double getLowest(double a[], int n){
  double  lowest = a[0];
  int month = 0;
  for(int i = 0; i < n; i++){
    if(lowest > a[i]){
      lowest = a[i];
      month = i;
    }
    return lowest;
  }
}

double getTotal(double a[], int n){
  double total = 0;
  for (int i = 0; i < n; i++) {
    total = a[i] + total;
  }
}

double getAverage(double a[], int n){
  double average = 0;
  double total = 0;
  for (int i = 0; i < n; i++) {
    total = a[i] + total;
  }
  average  = total / 12;
  return average;
}
