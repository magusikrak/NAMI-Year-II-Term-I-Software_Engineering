#include<iostream>
using namespace std;
int main(){
    int a[100], largest = 0, smallest, limit = 0;
    for(int i = 0 ; i < 100; i++){
        cout << i+1 << ". Enter number: ";
        cin >> a[i];
        if(a[i] == -99){
            limit = i;
            break;
        }
    }
    smallest = a[0];
    for(int i =0; i < limit; i++){
        if(largest < a[i]){
            largest = a[i];
        }
        if(smallest > a[i]){
            smallest = a[i];
        }
    }
    cout << "Largest number is " << largest << endl << "Smallest number is " << smallest;

}
