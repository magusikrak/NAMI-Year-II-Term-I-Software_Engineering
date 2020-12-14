#include <iostream>
using namespace std;
void fun(int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << *(arr + i * c + j);
        }
        cout << endl;
    }
}
int main()
{
    int arr[2][2] = {
        {1, 2},
        {3, 4}};
    fun(*(arr), 2, 2);
    return 0;
}