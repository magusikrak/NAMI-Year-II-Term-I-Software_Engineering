#include <iostream>
using namespace std;
int *createArrayInPointer(int);
int *returnReversedArray(int *, int);
int main()
{
    int size;
    cout << "enter the size of the elements" << endl;
    cin >> size;
    int *array = createArrayInPointer(size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << "\t";
    // }
    int *reversedArray = returnReversedArray(array, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << reversedArray[i] << "\t";
    // }
    cout << endl;
    return 0;
}
int *returnReversedArray(int *arr, int size)
{
    //  for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << "\t";
    // }
    int *reversedArray = new int[size];

    for (int i = size - 1, j = 0; i >= 0; j++, i--)

    {
        reversedArray[j] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << reversedArray[i] << "\t";
    }
    return reversedArray;
}

int *createArrayInPointer(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)

    {
        cout << "enter the " << i << "th element" << endl;
        cin >> arr[i];
    }
    return arr;
}