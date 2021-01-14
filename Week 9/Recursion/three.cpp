#include <iostream>
using namespace std;
int raiseToPower(int, int);
int main()
{
    cout << raiseToPower(5, 3) << endl;
    return 0;
}
int raiseToPower(int a, int b)
{
    if (b > 0)
    {
        return a * raiseToPower(a, b - 1);
    }
    else
    {
        return 1;
    }
}
