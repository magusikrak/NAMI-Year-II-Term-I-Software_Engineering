#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
  srand((unsigned int)time(NULL));
  int a = 0 + rand()%1000, b = 0 + rand()%1000;;
  cout << "Find the calculation of the following number" << endl
        << " " << a << endl << "+" << b << endl;
  int result, sum = a + b;
  cout << "Enter your result:";
  cin >> result;
  if(result == sum){
    cout << "Congratulation!! Your answer is correct";
  }else{
    cout << "Sorry your answer is wrong" << endl << "The correct answer is " << sum;
  }

}
