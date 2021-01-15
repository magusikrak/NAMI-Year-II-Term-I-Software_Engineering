#include <iostream>
using namespace std;
int *allocate(int n){
    int *value = new int[n];
    return value;
}
int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int *arrptr;
    arrptr = allocate(size);

    for (int i = 0; i < size; i++) {
        arrptr[i] = i;
    }

    for (int i = 0; i < size; i++) {
        cout << arrptr[i] << "\n";
    }

    delete []arrptr;
    arrptr = 0;

}

