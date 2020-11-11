#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int inputs;
    int i = 0;
    int randomNumber = rand() % 1000 ;
    cout << "the random number is " << randomNumber << endl;
    while (true)
    {

        cout << "please enter your guess" << endl;
        cin >> inputs;

        // cout << "the random number is " << randomNumber << endl;

        int buffer = inputs;

        if (buffer > randomNumber)
        {
            cout << "too high" << endl;
        }
        else if (buffer < randomNumber)
        {
            cout << "too low" << endl;
        }
        // if (buffer == (randomNumber))
        else
        {
            cout << "correct" << endl;
            break;
        }
        i++;
    }
    cout << "the total tries were " << i;
    return 0;
}