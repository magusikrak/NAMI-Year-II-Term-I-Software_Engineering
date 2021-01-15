#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int number;
    cout << "Enter a positive number less than 15: ";
    cin >> number;
    if(number < 0 || number >= 15){
        cout << "Wrong input";
        exit(0);
    }
    for(int i = 0; i < number; i++){
        cout << "XXXXX" << endl;
    }
}
