#include<iostream>
using namespace std;
int min(int, int);
int multiMin(int, int, int);
int main(){
    int n1, n2, n3;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter third number:";
    cin >> n3;
    int smallest = multiMin(n1, n2, n3);
    cout << "The smallest numebr is " << smallest;
    return 0;
}
int min(int n1, int n2){
    if(n1 < n2){
        return n1;
    }else{
        return n2;
    }
}

int multiMin(int n1, int n2, int n3){
    int min1 = min(n1, n2);
    int min2 = min(n2, n3);
    int smallest = min(min1, min2);
    return smallest;
}
