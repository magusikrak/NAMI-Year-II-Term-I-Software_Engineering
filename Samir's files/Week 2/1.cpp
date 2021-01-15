#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int a = 0 + rand()%1000, b = 0 + rand()%1000;;
    cout << "Find the calculation of the following number" << endl
    << " " << a << endl << "+" << b;
    cin.get();
    cout << a+b;

}
