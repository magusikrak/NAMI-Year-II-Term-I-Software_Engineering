#include <iostream>
using namespace std;
int binarySearch(int[], int, int);
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 9, 10};

    int result = binarySearch(arr, 7, 10);
    cout<<result;
    return 0;
}
int binarySearch(int arr[], int size, int val)
{
    int large = 6;
    int small = 0;
    while (large >= small)
    {
        int average = (large + small) / 2;
        // cout<<"average "<<average;
        if (arr[average] == val)
        {
            return average;
        }
        if (arr[average] < val)
        {
            small = average+1;
        }
        if (arr[average] > val)
        {
            large = average-1;
        }
    }
    return -1;
}
