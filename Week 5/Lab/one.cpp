#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int large(int[]);
int small(int[]);
int main()
{
    int arr[10], smallest ;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the number in location " << i << endl;
        cin >> arr[i];
    }
    int largest = large(arr);
     smallest = small(arr);
    cout<<"the largest is "<<largest<<"\n"<<"the smallest is "<<smallest<<endl;
    return 0;
}
int small(int arr[])
{
    int smallest = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int large(int arr[])
{
    int lar = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        if (lar < arr[i])
        {
            lar = arr[i];
        }
    }
    // cout << lar;
    return lar;
}
