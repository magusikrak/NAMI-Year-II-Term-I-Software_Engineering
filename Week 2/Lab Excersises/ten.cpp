#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number " << endl;
    cin >> number;
    int ser=1;
    cout<<"\n\n";
    for (int i = 0; i < number; i++)
    {
       
        for(int j=0;j<=i;j++)
        {
             cout<<ser<<"\t";
             ser++;
        }
            cout<<endl;
    }
}