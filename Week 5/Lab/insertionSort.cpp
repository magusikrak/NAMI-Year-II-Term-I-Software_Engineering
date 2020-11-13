#include <iostream>
using namespace std;

void insertionSort(int[], int);
void insertionSort(int array[], int size)
{
    int unsortedValue; // The first unsorted value
    int scan;
    // Used to scan the array
    for (int index = 1; index < size; index++)
    {
        unsortedValue = array[index];
        scan = index;
        while (scan > 0 && array[scan - 1] > unsortedValue)
        {
            array[scan] = array[scan - 1];
            scan--;
        }
        array[scan] = unsortedValue;
    }
    for (int k = 0; k < size; k++)
    {
        cout << array[k] << endl;
    }
}
int main()
{
    int arr[] = {9, 18, 17, 6, 5, 4, 3, 2, 1, 0};
    insertionSort(arr, 10);
}