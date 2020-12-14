#include <iostream>
using namespace std;
int *sortInAscendingOrder(int *, int);
double calculateAverage(int *, int);

int main()
{
    int size;
    cout << "enter the number of elements" << endl;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th element" << endl;
        cin >> arr[i];
    }
    arr = sortInAscendingOrder(arr, size);
    double average = calculateAverage(arr, size);
    cout << "The sorted array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    cout << "the average is: " << average << endl;
    return 0;
}
double calculateAverage(int *arr, int size)
{
    double average = 0;
    for (int i = 0; i < size; i++)
    {
        average += arr[i];
        /* code */
    }
    average = average / size;
    return average;
}

int *sortInAscendingOrder(int *arr, int size)
{
    int temp, locationOfMin, min;
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        locationOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                locationOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[locationOfMin];
        arr[locationOfMin] = temp;
    }
    return arr;
}
