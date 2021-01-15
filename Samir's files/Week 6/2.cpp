#include <iostream>
using namespace std;
double averageScore(int a[], int size){
    double total = 0, average;
    for (int i = 0; i < size; i++) {
        total = total + a[i];
    }
    average = total / size;
    return average;
}
int * sorter(int a[], int size){
    int temp = a[0];
    for (int i = 0; i < size; i++) {
        for(int j =1; j < size; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}
int main(){
    int size;
    cout << "Enter no. of students:";
    cin >> size;
    int *marks = new int[size];
    for(int i = 0; i < size; i++){
        cout << "Enter student " << i+1 << " marks: ";
        cin >> marks[i];
    }


    cout << "Average score of the students : " << averageScore(marks, size) << endl;
    cout << "The folllowing will sort marks in order" << endl;
    int *sorted = sorter(marks, size);
    for (int i = 0; i < size; ++i) {
        cout << *(sorted + i) << endl;
    }
}


