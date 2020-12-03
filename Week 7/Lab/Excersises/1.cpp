#include <iostream>
#include <string.h>
using namespace std;
int *counter(char *word)
{
    int *length=&word;

    return strlen(*length);
};
int main()
{
    const int size = 100;
    char word[size];
    cout << "Enter a word: ";
    cin.getline(word, size);

    cout << "The length of string: " << counter(word);
};
