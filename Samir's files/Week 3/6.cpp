#include <iostream>
using namespace std;
void checker();
void getScore();
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int n;
int main(){
    getScore();
}
void getScore(){
    int english, maths, science, computer, social, n;
    cout << "Enter your marks for English marks: ";
    cin >> n;
    if (n < 0 || n > 100) {
        while(n < 0 || n > 100){
            cout << "Please re-enter your marks: ";
            cin >> n;
        }
    }
    english = n;

    cout << "Enter your marks for Maths marks: ";
    cin >> n;
    if (n < 0 || n > 100) {
        while(n < 0 || n > 100){
            cout << "Please re-enter your marks: ";
            cin >> n;
        }
    }
    maths = n;

    cout << "Enter your marks for Science marks: ";
    cin >> n;
    if (n < 0 || n > 100) {
        while(n < 0 || n > 100){
            cout << "Please re-enter your marks: ";
            cin >> n;
        }
    }
    science = n;

    cout << "Enter your marks for Computer marks: ";
    cin >> n;
    if (n < 0 || n > 100) {
        while(n < 0 || n > 100){
            cout << "Please re-enter your marks: ";
            cin >> n;
        }
    }
    computer = n;

    cout << "Enter your marks for Social marks: ";
    cin >> n;
    if (n < 0 || n > 100) {
        while(n < 0 || n > 100){
            cout << "Please re-enter your marks: ";
            cin >> n;
        }
    }
    social= n;


    int lowest = findLowest(english, maths, science, computer, social);
    cout << "Your lowest marks is " << lowest << endl;

    calcAverage(english, maths, science, computer, social);
}

void calcAverage(int n1, int n2, int n3, int n4, int n5){
    int lowest = findLowest(n1, n2, n3 ,n4, n5);
    double total = n1 + n2 + n3 + n4 + n5 - lowest;
    double average = total / 5;
    cout << "Your average is " << average << endl;
}

int findLowest(int n1, int n2, int n3, int n4, int n5){
    int smallest = n1;
    if(smallest > n2){
        smallest = n2;
    }
    if(smallest > n3){
        smallest = n3;
    }
    if(smallest > n4){
        smallest = n4;
    }
    if(smallest > n5){
        smallest = n5;
    }
    return smallest;
}
