#include <iostream>
using namespace std;
void zeroSmaller(int, int);
int main(){
  int n1, n2;
  cout << "Enter first number: ";
  cin >> n1;
  cout << "Enter second number:";
  cout << "The first number you enetred is " << n1 << endl;
  cout << "The second number you enetred is " << n2;

  zeroSmaller(n1, n2);
  cout << "After passing from the function zeroSmaller" << end;
  cout << "The first number you enetred is " << n1 << endl;
  cout << "The second number you enetred is " << n2;

}
void zeroSmaller(int n1, int n2){
  if(n1 < n2){
    n1 = 0;
  }else{
    n2 = 0;
  }
}
