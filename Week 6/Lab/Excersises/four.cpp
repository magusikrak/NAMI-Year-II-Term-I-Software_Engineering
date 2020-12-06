#include <iostream>
using namespace std;
int returnMode(int *, int);
int returnMode(int *arr,int size)
{
    int num,location,times;
    for(int i=0;i<size-1;i++)
    {
        num=arr[i];
        times=1;
        for(int j=i+1;j<size;j++)
        {
             if(arr[i]==arr[j])
             {
                 times++;

             }
        }
    }
    cout<<times<<endl;
    cout<<num<<endl;
    return num;
}
int main()
{
    int size;
    cout << "enter the number of elements in the array" << endl;
    // cout<<  <<endl;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        int nCounter = i + 1;
        cout << "enter the " << nCounter << "th element in the " << i << "th index" << endl;
        cin >> arr[i];
    }
    int mode = returnMode(arr, size);
    return 0;
}