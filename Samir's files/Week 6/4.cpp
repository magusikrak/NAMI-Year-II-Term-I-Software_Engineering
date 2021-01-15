#include <iostream>
#include <iostream>
using namespace std;
int Counter();
int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int stat[size];
    int count[size];
    int greatest;



    for (int i = 0; i < size; i++) {
        cout << "Enter value for " << i+1 << ": ";
        cin >> stat[i];
    }
    //Counter
    for (int i = 0; i < size; i++) {
        count[i] = 0;
        for (int j = 0; j < size; j++) {
            if(stat[i] == stat[j]){
                count[i]++;
            }
        }
    }
    int greatest_count = count[0];
    //Greatest
    for (int i = 0; i < size; i++) {
        if(greatest_count < count[i]){
            greatest_count = i;
            greatest = i;
        }
    }
    cout << "Most repeated element: " << stat[greatest] << "\nRepeatation of  " << stat[greatest] << ": " << greatest_count ;
}