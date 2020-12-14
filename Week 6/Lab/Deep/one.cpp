#include <iostream>
using namespace std;
int *allocateArray(int);

int main()
{
    int size;
    cout << "enter the number of elements" << endl;
    cin >> size;
    int *arr = allocateArray(size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
int *allocateArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th element" << endl;
        cin >> arr[i];
    }
    return arr;
}
