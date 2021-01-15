#include <iostream>
using namespace std;
struct rainData{
    double total, highT, lowT;
    double avT;

};

int main(){
    rainData month[3];

    for (int i = 0; i < 3; i++) {
        cout << "Insert data for Month " << i+1 << "\n"
             << "Enter total Rainfall of the month: ";
        cin >> month[i].total;

        cout << "Enter Highest Tempreature of the month: ";
        cin >> month[i].highT;

        cout << "Enter Lowest Tempreature of the month: ";
        cin >> month[i].lowT;
    }

    // Greatest Tempreature
    double greatest = month[0].highT;
    for (int i = 0; i < 3; i++) {
        if (greatest < month[i].highT) {
            greatest = month[i].highT;
        }
    }

    // Lowest Tempreature
    double lowest = month[0].lowT;
    for (int i = 0; i < 3; i++) {
        if (lowest > month[i].highT) {
            lowest = month[i].highT;
        }
    }

    //Output
    cout << "Average Tempreature of months:";
    for (int i = 0; i < 3; ++i) {
        month[i].avT = (month[i].highT + month[i].lowT) / 2;
        cout << "Month " << i+1 << " = " << month[i].avT << endl;
    }

    cout << "Highest Tempreature Recorded: " << greatest << endl;
    cout << "Lowest Tempreature Recorded: " << lowest << endl;

}