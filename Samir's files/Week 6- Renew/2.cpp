#include<iostream>
using namespace std;
int *sorted(int student[], int size){
    int dummy = student[0];
    int *sorted[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(student[i] < student[j]){
                dummy = student[i];
                student[i] = student[j];
                student[j] = dummy;
            }
        }
    }

    *sorted = student;
    return *sorted;
}
int *average(int student[], int size){
    int total = 0;
    for (int i = 0; i < size; i++) {
        total = student[i] + total;
    }
    int average = total / size;
    int *av = new int;
    *av = average;
    return av;
}
int main(){
    int size;
    cout << "Enter no. of students: ";
    cin >> size;

    int student[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter marks for student " << i+1 <<": ";
        cin >> student[i];
    }

    int *sort;
    sort = sorted(student, size);
    for (int i = 0; i < size; i++) {
        cout << sort[i] << "\n";
    }
    int *av = average(student, size);
    cout << "Total average of " << size << "students : " << *av;


}