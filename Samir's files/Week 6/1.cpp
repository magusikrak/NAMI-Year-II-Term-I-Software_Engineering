#include<iostream>
using namespace std;

int *allocateMemory(int);
int main(){
    int size,*arrptr;
    cout<<" Entre the size "<<endl;
    cin>>size;

    // arrptr=new int[size]	;	//function
    arrptr=allocateMemory(size) ;
    for(int i=0;i<size;i++){
        *(arrptr +i)=i*3;			// arrptr[i]		arr[i]=i*3
    }

    cout<<"Elements in an array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<*(arrptr +i)<<endl;	// arrptr[i]		arr[i]
    }

    delete []arrptr;		// delete ptr;
    arrptr=0;			//ptr=0;
    return 0;
}
int *allocateMemory(int num){
    int *ptr=new int[num];
    return  ptr;
}