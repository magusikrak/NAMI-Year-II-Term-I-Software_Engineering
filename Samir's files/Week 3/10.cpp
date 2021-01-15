#include <iostream>
using namespace std;
bool isSquare(int);
int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    bool result = isSquare(n);
    if(result == true){
        cout << "The entered number is a square number";
    }else{
        cout << "The entered number is not a square number";
    }


}
bool isSquare(int n){
    double n1 = sqrt(n);
    int n2 = n1;
    bool result = true;
    while(result == true){
        if(n2 - n1 == 0){
            return(true);
        }
        return false;
    }
    return false;
}
