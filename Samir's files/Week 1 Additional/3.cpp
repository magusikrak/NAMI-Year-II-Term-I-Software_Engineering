#include<iostream>
using namespace std;
int main(){
  double loan, insurance, gas, oil, tyre, maintainance, m_total, a_total;
  cout << "Enter your following car expenses: " << endl;
  cout << "Enter your monthly loan payment: ";
  cin >> loan;
  cout << "Enter your monthly insurance payment: ";
  cin >> insurance;
  cout << "Enter your monthly gas payment: ";
  cin >> gas;
  cout << "Enter your monthly oil payment: ";
  cin >> oil;
  cout << "Enter your monthly tyre payment: ";
  cin >> tyre;
  cout << "Enter your monthly maintainance payment: ";
  cin >> maintainance;

  m_total = loan + insurance + gas + oil + tyre + maintainance;
  a_total = m_total * 12;

  cout << "Your monthly expense is " << m_total << endl
       << "Your annual expense is " << a_total<< endl;

}
