#include <iostream>
using namespace std;
int *createArray(int);
int *sortArrayInAscendingOrder(int *, int);
int main()
{
    int size = 5;
    cout << "how many elements in the array?" << endl;
    cin >> size;
    int *arr = createArray(size);
    
    int *sortedArray = sortArrayInAscendingOrder(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << *(sortedArray + i) << endl;
    }
    return 0;
}
int *sortArrayInAscendingOrder(int *arr, int size)
{
    int *arr = new int[size];
    int i, j, temp;
    for (i = (size - 1); i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            // temp=arr[j-1];
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int *createArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element in " << i << "th index" << endl;
        cin >> arr[i];
    }
    return arr;
}
