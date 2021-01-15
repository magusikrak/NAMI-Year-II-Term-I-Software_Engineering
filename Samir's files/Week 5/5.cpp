#include<iostream>
#include<vector>
using namespace std;
int calculate(vector<int>a){
    int i = 0, checker = 1, result =0;
    for ( i = 0; i < a.size(); i++)
    {
        /* code */
        if(checker == 1){
            result  = result + a[i];
            checker = 0;
        }else{
            result = result - a[i];
            checker = 1;
        }
        
    }
    return result;
    
}
int main(){
    vector<int> vec_a(9);
    for(int i = 0; i < vec_a.size(); i++){
        cout << "Enter your number for element " << i+1 << " : ";
        cin >> vec_a[i];
    }
    int result  = calculate(vec_a);
    cout << "Result is" << result;

    
}