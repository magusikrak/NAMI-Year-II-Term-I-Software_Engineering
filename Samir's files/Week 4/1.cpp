#include<iostream>
using namespace std;
int largest(int num[], int SIZE){
  int largest  = num[0];
  for(int a = 0; a < SIZE; a++){
    if(largest < num[a]){
      largest  =  num[a];
    }
  }
  return largest;
}
int smallest(int num[], int SIZE){
  int smallest  = num[0];
  for(int a = 0; a < SIZE; a++){
    if(smallest > num[a]){
      smallest  =  num[a];
    }
  }
  return smallest;
};
int main(){
  int num[10], SIZE = sizeof(num)/sizeof(num[0]);
  for(int i = 0; i < SIZE; i++){
    cout << i+1 << ". Enter a number : ";
    cin >> num[i];
  }
  cout << "The largest number is " << largest(num, SIZE) << "\n";
  cout << "The smallest number is " << smallest(num, SIZE) << "\n";
}

