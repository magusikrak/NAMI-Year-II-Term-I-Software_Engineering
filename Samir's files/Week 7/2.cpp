#include <iostream>
using namespace std;

void reverse(char *word){
    int length = strlen(word);
    char rev[50];
    for (int i = 0, j = length - 1 ; i < length, j >= 0; i++, j--) {
        rev[i] = word[j];
    }
    cout << "Reverse: ";
    for (int i = 0; i < length; i++) {
        cout << rev[i];
    }
}
int main(){
    int size = 50;
    char word[size];
    cout << "Enter a word: ";
    cin.getline(word, size);
    char *ptrword = word;
    reverse(ptrword);

}
