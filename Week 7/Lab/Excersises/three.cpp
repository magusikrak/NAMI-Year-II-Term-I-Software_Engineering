/**
#include <iostream>
using namespace std;
int countWords(char *);
int main()
{
    int size;
    size = 100;
    char str[size];
    cout << "enter your sentence" << endl;
    cin.getline(str, size);
    int numberOfWords = countWords(str);
    cout << "the number of words present in the sentece is\t" << numberOfWords << endl;
    return 0;
}

int countWords(char *sentence)
{
    
    int words = 1, size = 0;

    while (sentence[size] != '\0')
    {
        if (sentence[size] == ' ')
        {
            words++;
        }
        size++;
    }
    return words;
}
