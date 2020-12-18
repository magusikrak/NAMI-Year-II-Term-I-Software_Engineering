#include <iostream>
using namespace std;
int calculateSum(int);
int main()
{
    cout << calculateSum(10) << endl;
    return 0;
}

int calculateSum(int n)
{
    if (n > 0)
    {
        return n + calculateSum(n - 1);
    }
    return n;
}
