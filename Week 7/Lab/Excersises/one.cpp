#include <iostream>
using namespace std;
int countCharacters(char *);
int main()
{
    int size;
    size = 20;
    char *str = new char[size];
    cout << "enter the string" << endl;
    cin.getline(str, size);
    int totalNumberOfCharacters = countCharacters(str);
    cout << "The total number of chars is " << totalNumberOfCharacters << endl;
    return 0;
}
int countCharacters(char *string)
{
    int count = 0;
    while (string[count] != '\0')
    {

        count++;
    }
    return count;
}
