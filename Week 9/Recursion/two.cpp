#include <iostream>
using namespace std;
int sumNumbers(int);
int main()
{
    cout << sumNumbers(3) << endl;
    return 0;
}
int sumNumbers(int n)
{
    if (n >= 0)
    {
        return n + sumNumbers(n - 1);
    }
    else
    {
        return n;
    }
}