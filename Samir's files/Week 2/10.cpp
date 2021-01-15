#include<iostream>
using namespace std;
int main(){
    int number = 1,j;
    for(int i = 0; i <= 5; i++){
        for(j = 0; j < i; j++){
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}
