#include <iostream>
using namespace std;
int main(){
    int size = 5, test = 4;
    string name[size];
    string grade[size];
    double marks[size][test];
    double average[size];
    double sum = 0;
    
    //Input
    for (int i = 0; i < size; i++) {
        cout << "Enter your name:";
        cin >> name[i];
        for (int j = 0; j < test; j++) {
            cout << "Enter your " << j+1 << " marks: ";
            cin >> marks[i][j];
        }
    }
    
    //Calculation
    for (int i =0; i < size; i++) {
        for (int j = 0; j < test; j++) {
            sum = marks[i][j]+ sum;
        }
        average[i] = sum/5;
        if(average[i] <= 100 && average[i] >=90){
            grade[i] = "A";
        }else if (average[i] <= 89 && average[i] >=80){
            grade[i] = "B";
        }else if (average[i] <= 79 && average[i] >=70){
            grade[i] = "C";
        }else if (average[i] <= 69 && average[i] >=60){
            grade[i] = "D";
        }else{
            grade[i] = "F";
        }
    }
    
    //Output
    cout << "The result of the following students are as follow:\n";
    for (int i = 0; i < size; i++) {
        cout << "Student name: " << name[i] << "\n" << "Average: " << average[i] << "\n" ;
        for (int j = 0; j < test; j++) {
            cout << "Test No. " << j+1 << ": " <<marks[i][j] << "\n";
            
        }
        
    }
}
