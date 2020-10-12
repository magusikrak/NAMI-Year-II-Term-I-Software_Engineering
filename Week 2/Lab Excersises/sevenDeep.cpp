#include <iostream>
using namespace std;
int main()
{
    bool rep = true;
    cout << "Enter Your Numbers = " << endl;
    int container = 0;
    int containerTwo = 0;
    int exitTrigger;
    while (rep)
    {

        int num;
        cin >> num;
        container = num;
        if (container < num)
        {
            container = num;
        }
        else
        {
            containerTwo = num;
        }
        cout << "Press -99 to exit the iteration " << endl;
        cin >> exitTrigger;
        if (exitTrigger == (-99))
        {
            bool rep = false;
        }
    }
    // cout << "Gr
    cout << "Greater number is " << container << endl;
    cout << "Lesser number is " << containerTwo << endl;
    return 0;
}