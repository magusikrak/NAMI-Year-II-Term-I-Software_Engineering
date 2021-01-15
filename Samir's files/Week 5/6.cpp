#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a = {1, 4, 9, 16, 9, 7, 4, 9, 11};
    for (int i = 0; i < a.size(); i++) {
        for (int j = i+1; j < a.size(); j++) {
            if(a[i] == a[j]){
                a.push_back(a[i]);
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "\t\t";
    }
}
