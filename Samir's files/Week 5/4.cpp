#include<iostream>
#include<vector>
using namespace std;

bool equals(vector <int>, vector <int>);

int main(){
    vector<int> vec_a(5);
    vector<int> vec_b(5);
    for(int i = 0; i < vec_a.size(); i++){
        vec_a[i] = i;
        vec_b[i] = i;
    }

    if(equals(vec_a, vec_b)){
        cout << "They are equal";
    }else{
        cout << "They are not equal";
    }
    return 0;
}

bool equals(vector<int>a, vector<int>b){
    if(a.size()!=b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}