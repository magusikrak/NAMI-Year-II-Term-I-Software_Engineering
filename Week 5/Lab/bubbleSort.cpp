#include <iostream>
using namespace std;
int bubbleSort(int[], int);
int main()
{
    int arr[] = {9, 8, 7, 5, 4, 7, 6, 5, 7, 9, 9}; //11
    int result = bubbleSort(arr, 11);
}
int bubbleSort(int arr[],int size)
{
    bool swap=true;
    while(swap==true)
    {
        swap=false;
        for(int i=1;i<size;i++)
        {
            if(arr[i]<arr[i-1])
            {
                
                arr[i]=arr[i]+arr[i-1];
                arr[i-1]=arr[i]-arr[i-1];
                arr[i]=arr[i]-arr[i-1];
                swap=true;
               
            }
        }
        
    }
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<endl;
    }
    return 0;
}