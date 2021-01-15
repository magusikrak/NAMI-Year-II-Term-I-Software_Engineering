#include <iostream>
using namespace std;
int *bubblesort(int, int);
int main(){
    int ex1i[] = {7, 2, 3, 8, 9, 1};
    int ex1ii[] = {55, 22, 44, 11, 33};
    int ex1iii[] = {101, 22, 44, 57, 45, 77};

    ex1i = bubblesort(ex1i, sizeof(ex1i)/sizeof(ex1i[0]));
    cout << ex1i;
}

int *bubblesort(int arr[], int size){
    int sorter = arr[0];
    for (int i = 0; i < size; i++) {
        if(arr[i] > arr[i+1]){
            sorter = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = sorter;
        }
    }
    return arr;
}
