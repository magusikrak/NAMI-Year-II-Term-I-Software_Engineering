#include <iostream>
using namespace std;
int main(){
    int accounts[] = {5658845, 1302850, 7825877, 7576651, 4520125,            7895122,8080152, 4562555, 1250255, 1005231, 7881200, 4581002, 8777541, 5552012, 6545231, 8451277, 5050552,3852085};

    int searched;
    cout << "Enter the bank account number: ";
    cin >> searched;
    int size = sizeof(accounts)/sizeof(accounts[0]);
    int i = 0;
    while (i < size) {
        if(accounts[i] == searched){
            cout << "Value found in accounts[" << i << "]\n";
            exit(0);
        }
        i++;
    }
}
