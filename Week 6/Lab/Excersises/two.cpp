#include <iostream>
using namespace std;
int *allocateArray(int);
int *sortAscendingOrder(int *, int);
double calculateAverage(int *,int);
int main()
{
    int size;
    cout << "enter the size of the elements" << endl;
    cin >> size;
    int *arr = allocateArray(size);
    int *sortedArray = sortAscendingOrder(arr, size);
    double average=calculateAverage(arr,size);
    cout<<"the sorted list of scores is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"the average is : "<<average<<endl;
    return 0;
}
double calculateAverage(int *arr,int size){
    double average=0;
    for(int i=0;i<size;i++)
    {
        average+=arr[i];
    }
    return (average)/size;
}

int *sortAscendingOrder(int *arr, int size)
{
    int temp, min, locationOfMin;
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        locationOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                locationOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[locationOfMin] = temp;
    }
    return arr;
}

int *allocateArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)

    {
        int elem=i+1;
        cout << "enter the " << elem << "th element" << endl;
        cin >> arr[i];
    }
    return arr;
}