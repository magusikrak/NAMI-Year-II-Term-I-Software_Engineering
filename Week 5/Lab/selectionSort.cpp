#include <iostream>
using namespace std;
void bubbleSort(int[], int);
int main()
{
    int arr[] = {9, 18, 17, 6, 5, 4, 3, 2, 1, 0};
    bubbleSort(arr, 10);
    return 0;
}
void bubbleSort(int arr[], int size)
{
    int min, minIndex;
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = min;
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << endl;
    }
}