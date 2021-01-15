#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int a = 0 + rand()%1000, b = 0 + rand()%1000, choice, result = 0;
    cout << "What calculation do you want to practise" << endl
    << "1. Multiplication" << endl
    << "2. Division" << endl
    << "3. Addition" << endl
    << "4. Subtraction" << endl
    << "Enter the number of the action you want to perform: ";
    cin >> choice;
    cout << "Find :" << endl;
    switch (choice) {
        case 1:
            cout << a << "*" << b << endl;
            result = a * b;
            break;
        case 2:
            cout << a << "/" << b << endl;
            result = a / b;
            break;
        case 3:
            cout << a << "+" << b << endl;
            result = a + b;
            break;
        case 4:
            cout << a << "-" << b << endl;
            result = a - b;
            break;
        default:
            cout << "Wrong input!!";
            exit(0);
    }
    cout << "Press any key if you want to find the answer:" << endl;
    cin.get();
    cout << "Your answer is " << result;
}
