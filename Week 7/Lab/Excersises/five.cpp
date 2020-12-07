#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int size;
    size = 50;
    char firstName[size];
    char middleName[size];
    char lastName[size];
    int sizeForWholeName = size * 3;
    char formattedName[sizeForWholeName];

    cout << "enter your firstName, middle name and lastname" << endl;

    cin.getline(firstName, size);
    cin.getline(middleName, size);
    cin.getline(lastName, size);

    strcat(formattedName, lastName);
    strcat(formattedName, ",");
    strcat(formattedName, " ");

    strcat(formattedName, firstName);
    strcat(formattedName, " ");

    strcat(formattedName, firstName);

    int count=0;
    while(formattedName[count]!='\0')
    {
        cout<<formattedName[count];
        count++;
    }

    return 0;
}