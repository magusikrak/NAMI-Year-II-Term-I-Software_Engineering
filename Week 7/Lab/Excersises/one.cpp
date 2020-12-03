#include <iostream>
using namespace std;
void countCharacters(char *);
int main()
{
    // int size = 20;
    // // char yourWord[size];

    // char *pYourWord;
    // pYourWord = new char[size];
    // cout << "please enter your word to be counted ";
    // cin.getline(pYourWord, size);
    // cout<<&pYourWord<<endl;
    // // countCharacters(&pYourWord);
    int i = 10;
    int *p = &i;

    return 0;
}
void countCharacters(char *myWord)
{
    cout << *myWord << endl;
}