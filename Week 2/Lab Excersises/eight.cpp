#include <iostream>
using namespace std;
int main()
{
    for (int i = 2; i <= 200; i++)
    {
        int factors = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                factors++;
            }
        }
        if(factors==1)
        {
            cout<<"the prime number is "<<i<<endl;
        }
    }
    return 0;
}