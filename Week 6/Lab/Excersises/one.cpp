#include <iostream>
using namespace std;
int *allocateArray(int);
int main()
{
    int size;
    cout << "enter the size of the elements" << endl;
    cin >> size;
    int *ppArr = allocateArray(size);
    return 0;
}
int *allocateArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)

    {
        cout << "enter the " << i << "th element" << endl;
        cin >> arr[i];
    }
    return arr;

}