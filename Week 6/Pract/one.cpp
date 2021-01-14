#include <iostream>
using namespace std;
int *createArray(int);
int main()
{
    int size = 5;
    cout << "how many elements in the array?" << endl;
    cin >> size;
    int *arr = createArray(size);
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << endl;
    }
    return 0;
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
