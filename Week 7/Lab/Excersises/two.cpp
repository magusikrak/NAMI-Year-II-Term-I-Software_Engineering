#include <iostream>
using namespace std;
void reverseString(char *);
int main()
{
    int size;
    size = 20;
    char *str = new char[size];
    cout << "enter the string" << endl;
    cin.getline(str, size);
    reverseString(str);
    return 0;
}
void reverseString(char *str)
{
    int size = 0;
    while (str[size] != '\0')
    {

        size++;
    }
    char *reversedString = new char[size];
    
    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        reversedString[j] = str[i];
    }
    for (int k = 0; k < size; k++)
    {
        cout << reversedString[k];
    }
    cout << endl;
}