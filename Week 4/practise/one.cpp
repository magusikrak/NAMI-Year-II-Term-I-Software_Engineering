#include<iostream>
using namespace std;
int largestElement(int[],int);
int smallestElement(int[],int);
int main()
{
    int const SIZE=10;
    int arr[SIZE];
    for(int i=0;i<SIZE;i++){
        cout<<  "please enter the element in the "<<i<<"th index"<<endl;
        cin>>arr[i];
    }
    cout<<"The largest element is "<<largestElement(arr,SIZE)<<endl;
    cout<<"The smallest element is "<<smallestElement(arr,SIZE)<<endl;
    // cout<<  SIZE<<endl;
    return 0;   
}
int largestElement(int arr[],int size){
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    return largest;

}
int smallestElement(int arr[],int size){
    int smallest=arr[0];
    for(int i=0;i<size;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    return smallest;

}
