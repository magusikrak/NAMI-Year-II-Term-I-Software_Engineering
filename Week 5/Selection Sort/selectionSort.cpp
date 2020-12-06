#include <iostream>
using namespace std;
void selectionSort(int[], int);
int main()
{
    int size;
    cout << "How many elements in yor array?" << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"please enter the "<<i<<"th array"<< endl;
        cin>>arr[i];
    }
    selectionSort(arr,size);
    return 0;
}
void selectionSort(int arr[], int size)
{
    int temp, locationOfMin, min;
    for (int i = 0; i < (size - 1); i++)
    {
        min = arr[i];
        locationOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                locationOfMin=j;
            }

        }
        temp=arr[i];
        arr[i]=arr[locationOfMin];
        arr[locationOfMin]=temp;

    }
    for(int k=0;k<size;k++)
    {
        cout<<arr[k];
    }
    cout<<endl;
}
