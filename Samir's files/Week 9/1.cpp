#include <iostream>
using namespace std;
void sign (int n)
{
    if(n != 0){
        cout << n << "\tNo Parking\n";
        sign(n-1);
    }
}
int main (){
    sign(10);
}