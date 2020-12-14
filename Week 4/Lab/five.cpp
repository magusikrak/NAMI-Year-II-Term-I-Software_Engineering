#include <iostream>

using namespace std;
const int r = 5, c = 5;
int getTotal(int[r][c]);
int main()
{

    int arr[r][c] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};

    int total = getTotal(arr);
    
    // cout<<total<<endl;
    return 0;
}
int getTotal(int arr[r][c])
{
    // cout << arr[1][2];
    int total=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            total+=arr[i][j];
        }
    }
    
    return total;
}