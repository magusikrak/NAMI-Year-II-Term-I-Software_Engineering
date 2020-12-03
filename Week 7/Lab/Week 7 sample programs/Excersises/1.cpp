#include <iostream>
#include <string.h>
using namespace std;
int counter(char* word){
    return strlen(word);
}
void reverse(char* word){
    int len = strlen(word);
    char *str = (word + len);
    while (*str-- != word){
        char *str = (word + len);
    }

}
int main(){
    const int size = 100;
    char word[size];
    cout << "Enter a word: ";
    cin.getline(word, size);

    cout << "The length of string: " << counter(word);
    reverse(word);
    cout << "Reverse of the string is: " << *str;


};

