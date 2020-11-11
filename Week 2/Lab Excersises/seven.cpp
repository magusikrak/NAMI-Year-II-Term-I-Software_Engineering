#include <iostream>
using namespace std;
int main()
{
    int series[] = {0};
    int i = 0;

    while (true)
    {
        cout << "enter a number" << endl;
        cin >> series[i];

        cout << series[i] << endl;

        if (series[i] == -99)
        {
            break;
        }
        cout << "the value of i is " << i << endl;

        i++;
    }

    cout << "the number of elements are " << i <<"\n\n"<< endl;

    for (int j = 0; j <= i; j++)
    {
        // cout << "the number of elements are\n\n " << i;
        cout << series[j] << endl;
    }
    return 0;
}