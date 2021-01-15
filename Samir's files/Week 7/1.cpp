#include <iostream>
#include <string.h>
using namespace std;
int counter(char* word){
    return strlen(word);
}

int main(){
    const int size = 100;
    char word[size];
    cout << "Enter a word: ";
    cin.getline(word, size);

    cout << "The length of string: " << counter(word);
};

