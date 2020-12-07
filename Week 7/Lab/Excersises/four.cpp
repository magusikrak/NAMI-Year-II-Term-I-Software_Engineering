#include <iostream>
#include <regex>
#include <cctype>
using namespace std;
int countVowels(char *);
int countConsonants(char *);

int main()
{

    while (true)
    {
        int size;
        size = 100;
        char str[size];
        char userOption;
        cout << "enter your sentence" << endl;
        cin.getline(str, size);
        cout << "Menu:\nA) Count the number of vowels in the string\nB)Count the number of consonants in the string\nC) Count both vowels and consonants in the string\nD) Enter another string\nE) Exit the program" << endl;
        cin >> userOption;
        userOption = tolower(userOption);
        cout << userOption << endl;
        if (userOption == 'a')
        {
            cout << "the number of vowels is\t" << countVowels(str) << endl;
        }
        else if (userOption == 'b')
        {
            cout << "the number of consonants is\t" << countConsonants(str) << endl;
        }
        else if (userOption == 'c')
        {
            cout << "the number of vowels is\t" << countVowels(str) << endl;
            cout << "the number of consonants is\t" << countConsonants(str) << endl;
        }
        else if (userOption == 'd')
        {
            continue;
        }
        else if (userOption == 'e')
        {
            break;
        }
        else
        {
            cout << "error input" << endl;
            continue;
        }
        int numberOfVowels = countVowels(str);
        int numberOfConsonants = countConsonants(str);
    }
    return 0;
}
int countConsonants(char *sentence)
{
    int numberOfConsonants = 0, size = 0;
    char regexVowels[] = "[aeiou]";

    while (sentence[size] != '\0')
    {
        if (sentence[size] != 'a' && sentence[size] != 'e' && sentence[size] != 'i' && sentence[size] != 'o' && sentence[size] != 'u')
        {
            numberOfConsonants++;
        }
        size++;
    }
    return numberOfConsonants;
}

int countVowels(char *sentence)
{
    int numberOfVowels = 0, size = 0;
    char regexVowels[] = "[aeiou]";

    while (sentence[size] != '\0')
    {
        if (sentence[size] == 'a' || sentence[size] == 'e' || sentence[size] == 'i' || sentence[size] == 'o' || sentence[size] == 'u')
        {
            numberOfVowels++;
        }
        size++;
    }
    return numberOfVowels;
}
