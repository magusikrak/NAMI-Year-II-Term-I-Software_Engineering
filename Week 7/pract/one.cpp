#include <iostream>
#include <string>
using namespace std;
int countCharacters(char *);
int countCharacters(char *arr)
{
    int i = 0;
    for (i; arr[i] != '\0'; i++)
    {
        // cout<<i<<endl;
    }
    // cout << i << endl;

    return i;
}
int main()
{
    int size = 100;
    char *arr = new char[size];
    // char arr[100];
    cout << "enter the word" << endl;
    cin.getline(arr, size);
    int numberOfCharacters = countCharacters(arr);
    cout << numberOfCharacters << endl;
    return 0;
}