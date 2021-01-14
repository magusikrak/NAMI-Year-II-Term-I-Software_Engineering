#include <iostream>
// #include <vector>
using namespace std;
void sortArray(int *, int);
void quickSortArray(int *, int, int);
int main()
{
    int size = 9;
    int *arr = new int[size]{44, 75, 12, 43, 55, 12, 64, 77, 33};
    sortArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
void sortArray(int *arr, int size)
{
    quickSortArray(arr, 0, size - 1);
}
void quickSortArray(int *arr, int left, int right)
{
    int temp, left_buffer, right_buffer;
    left_buffer = left;
    right_buffer = right;
    temp = arr[left];
    while (left < right)
    {
        while ((arr[right] >= temp) && (left < right))
        {
            right--;
            if (left != right)
            {
                arr[left] = arr[right];
                left++;
            }
        }
        while ((arr[left] <= temp) && (left < right))
        {
            left++;
            if (left != right)
            {
                arr[right] = arr[left];
                right++;
            }
        }
        arr[left] = temp;
        temp = left;
        left = left_buffer;
        right = right_buffer;
        if (left < temp)
        {
            quickSortArray(arr, left, temp - 1);
        }
        if (right > temp)
        {
            quickSortArray(arr, temp + 1, right);
        }
    }
}
