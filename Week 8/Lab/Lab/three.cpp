#include <iostream>
using namespace std;
struct Inventory
{
    string description;
    int numberOfParts;
};
void Display(Inventory[], int);
int addParts(Inventory[], int);
int removeParts(Inventory[],int, int);
int main()
{
    int size = 10;
    Inventory bin[size] = {{"BinValue", 10},
                           {"Bearing", 5},
                           {"Bushing", 15},
                           {"Coupling", 21},
                           {"Flange", 7},
                           {"Gear", 5},
                           {"Gear Housing", 5},
                           {"Vacuum Gripper", 25},
                           {"Cable", 18},
                           {"Rod", 12}};
    while (true)
    {
        Display(bin, size);
        char ch;
        cout << "Would you like to change(c) a data or quit(q)" << endl;
        // getline(ch,1);
        cin >> ch;
        if (ch == 'q' || ch == 'Q')
        {
            break;
        }
        else
        {
            // cout<<endl;
            int indexNumber;
            char selection;
            cout << "Which data would you like to change??(Enter the index number)" << endl;
            cin >> indexNumber;
            cout << "you have selected " << bin[indexNumber].description << endl;
            cout << "Would you like to add or deduct? A/D" << endl;
            cin >> selection;
            if (selection == 'A')
            {
                int numberOfParts;
                cout << "how many parts would you like to add? " << endl;
                cin>>numberOfParts;
                bin[indexNumber].numberOfParts=addParts(bin,indexNumber,numberOfParts);
            }
            if (selection == 'D')
            {
            }
            // if()
        }
    }

    return 0;
}


int addParts(Inventory m[],int i, int n)
{
    int added = m[i].numberOfParts + n;
    return added;
}
// return added
// int removeParts(Inventory[], int){}
void Display(Inventory bin[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << " " << bin[i].description << "\t\t\t||" << bin[i].numberOfParts << endl;
    }
}
