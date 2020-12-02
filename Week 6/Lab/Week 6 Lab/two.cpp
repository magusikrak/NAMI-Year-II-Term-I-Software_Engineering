#include <iostream>
using namespace std;
void ascendingOrder(int **, int *);
int main()
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        int tempVal = 0;
        cout << "enter the score" << endl;
        cin >> tempVal;
        arr[i] = tempVal;
    }
    ascendingOrder(&arr, &size);
    return 0;
}
void ascendingOrder(int *arr[], int *size)
{
    // cout<<*size;
}