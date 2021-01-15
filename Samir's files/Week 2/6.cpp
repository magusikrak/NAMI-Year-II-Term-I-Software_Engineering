#include<iostream>
using namespace std;
int main(){
    int sum = 0, amt;
    cout << "Enter a number to find the total sum:";
    cin >> amt;
    for(int i =0; i<= amt ; i++){
        sum = sum + i;
    }
    cout << "Total sum is " << sum;
}
