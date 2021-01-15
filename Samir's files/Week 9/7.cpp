#include <iostream>
using namespace std;
void Reverse(string word){
    if(word.size() == 0){
        return;
    }
    Reverse(word.substr(1));
    cout << word[0];
}
int main(){
    cout << "Enter a Word: ";
    string word;
    cin >> word;
    Reverse(word);
}
