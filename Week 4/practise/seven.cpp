#include <iostream>
using namespace std;
bool sameSet(int[], int[]);
int main()
{
    int a[] = {1,12,15,18, 4,16, 9, 7, 4};
    int b[] = { 7, 9, 16, 4, 1};
    bool isSame = sameSet(a, b);
    // if(isSame){
    //     cout<<"the arrays are identical"<<endl;
    // }
    // else{
    //     cout<<"the arrays are not identical"<<endl;

    // }
    return 0;
}
bool sameSet(int a[], int b[])
{
    // int nA =sizeof(a)/sizeof(a[0]);
    // int nB = sizeof(b)/sizeof(b[0]);
    cout<<sizeof(a)/sizeof(b[0])<<endl;
    // bool isSame = true;
    // for (int i = 0; i < nA; i++)
    // {
    //     bool matchingElement=false;
    //     for (int j = 0; j < nB; j++)
    //     {

    //         if(a[i]==b[j]){
    //             matchingElement=true;
    //             break;
    //         }
    //     }
    //     if(matchingElement==false){
    //         isSame=false;
    //         break;
    //     }
    // }
    // return isSame;
    return false;
}
