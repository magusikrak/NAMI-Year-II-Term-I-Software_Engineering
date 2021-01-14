#include <iostream>
using namespace std;
int countNumber(char &);
int main()
{
    int size = 100;
    char *name=new char[size];
    cout << "enter your name" << endl;
    cin.getline(name, size);
    int numberOfCharacters=countNumber(&name);
    cout<<numberOfCharacters<<endl;
    return 0;
}
int countNumber(char &name){
    int count;
    for(count=0;*name[count]!='\0';count++)
    {

    }
    return count;
}

