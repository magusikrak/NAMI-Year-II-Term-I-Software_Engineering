#include<iostream>
using namespace std;
void called();
int main(){
    int amt = 0;
    while(amt < 10){
        cout << "Press enter to be called";
        cin.get();
        called();
        amt++;
    }
}
void called(){
    static int amt = 0;
    amt++;
    cout << "You have called this function" << amt << " times" << endl;
}
