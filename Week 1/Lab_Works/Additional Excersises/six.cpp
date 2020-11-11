#include <iostream>
using namespace std;
int main()
{
    string name, city, college, profession, animal, petName;
    int age;
    cout << "Please enter your name" << endl;
    cin >> name;
    cout << "Please enter your age" << endl;
    cin >> age;
    cout << "Please enter your name of the city" << endl;
    cin >> city;
    cout << "Please enter your name of the college" << endl;
    cin >> college;
    cout << "Please enter your profession" << endl;
    cin >> profession;
    cout << "Please enter your type of animal" << endl;
    cin >> animal;
    cout << "Please enter your per's name" << endl;
    cin >> petName;
    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << "," << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted " << animal << " named " << petName<< ". They both lived happily ever after." << endl;
    return 0;
}