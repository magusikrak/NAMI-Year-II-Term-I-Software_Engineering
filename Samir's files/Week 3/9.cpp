#include <iostream>
using namespace std;
void swap(int, int);
int main(){
    int a, b;
    cout << "Enter value for vairable a: ";
    cin >> a;
    cout << "Enter value for vairable b: ";
    cin >> b;
    cout << "Before swapping first and second value respectively " << a << ", " << b << endl;
    swap(a,b);
    cout << "After swapping first and second value respectively " << a << ", " << b;
}
void swap(int n1, int n2){
    int n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;
}
