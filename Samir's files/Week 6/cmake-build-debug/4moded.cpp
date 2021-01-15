#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int stat[size];
    int count[size];
    int greatest;
    int greatestCount;
    int finalGreatest = 0;
    int finalGreatestCount = 0;

    for (int i = 0; i < size; i++) {
        cout << "Enter value for " << i+1 << ": ";
        cin >> stat[i];
    }

    sort(stat, stat + size);
    for(int i = 0; i < size; i++) {
        greatestCount = 1;
        for (int j = 0; j < size; j++) {
            greatest = stat[i];
            if ( stat[i] == stat[i+1] ) {
                greatestCount += 1;
                i++;
            } else if (stat[i] != stat[i+1]) {
                break;
            }
            if ( greatestCount > finalGreatestCount ) {
                finalGreatest = greatest;
                finalGreatestCount = greatestCount;
            }
        }
    }

    if (finalGreatestCount == 0) {
        cout << "No element was repeated";
    } else {
        cout << "Most repeated element: " << finalGreatest << "\nRepeatation of  " << finalGreatest << ": " << finalGreatestCount;
    }
    return 0;

    for (int i = 0; i < size; i++) {
        greatest = stat[i];
        
        greatestCount += 1;
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