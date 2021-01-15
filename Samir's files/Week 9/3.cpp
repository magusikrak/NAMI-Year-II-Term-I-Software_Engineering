#include <iostream>
using namespace std;
int power(int n, int pow){
    if(pow != 1){
        return n*power(n, pow - 1);
    }else{
        return n;
    }
}

int main(){
    int a = power(2,4);
    cout << "2^4 = " << a;
}
