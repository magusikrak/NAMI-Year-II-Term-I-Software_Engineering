#include <iostream>
using namespace std;
int sum(int a){
    if(a != 0){
        return a+sum(a-1);
    }else{
        return a;
    }

}
int main(){
    int n = sum(3);
    cout << n;
}