#include <iostream>
using namespace std;
int *createArray(int);
int *reverseArray(int*,int);
int main()
{
    int size = 5;
    cout << "how many elements in the array?" << endl;
    cin >> size;
    int *arr = createArray(size);
    int *reversedArray=reverseArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << *(reversedArray + i) << endl;
    }
    return 0;
}
int *reverseArray(int *arr,int size){
    int *reversedArray=new int[size];
    for(int i=0,j=size-1;i<size;i++,j--){
        reversedArray[i]=arr[j];
    }
    // int i,j=size-1;
    // for(i=0;i<size;i++){
    //     for(;j>=0;j++){
    //         reversedArray[i]=arr[j];
    //         break;
    //     }
    //     continue;
    // }
    return reversedArray;
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
