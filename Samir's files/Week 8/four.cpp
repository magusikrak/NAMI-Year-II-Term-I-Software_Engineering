#include <iostream>
using namespace std;
struct Inventory{
    string desc;
    int parts;
};
void addParts(Inventory &m, int size){
    if(size < 0){
        cout << "Enter a valid Number";
    }else if((m.parts+size) > 30){
        cout << "Cannot exceed the value above 30";
    }else{
        m.parts = m.parts + size;
    }
}
void deductParts(Inventory &m, int size){
    if(size > 0){
        cout << "Enter a valid Number";
    } else{
        m.parts = m.parts - size;
    }
}
void display(Inventory m[], int size){
    cout << "Description \t\t\tStock\n";
    for (int i = 0; i < size; i++) {
        cout << m[i].desc << " \t\t\t\t " << m[i].parts << "\n";
    }
}
int main(){
    Inventory tools[10] = {{"Bin Valve", 10}, {"Bearing", 5}, {"Bushing", 15}
            ,{"Coupling", 21}, {"Flange", 7}, {"Gear", 5},
             {"Gear Housing", 5}, {"Vaccum Gripper", 25}, {"Cable", 18},
             {"Rod", 12}};
    display(tools, 10);
    int action = 0, no, add;
    while (action != 4){
        cout << "What action do you want to perform: \n"
             << "1. Display\n"
             << "2. Add Item\n"
             << "3. Deduct Item\n"
             << "Close the system\n"
             <<"Enter the number for the following cases";
        cin >> action;
        if(action == 1){
            display(tools, 10);
        }else if(action == 2){
            cout << "Enter item no. that you want to add on: ";
            cin >> no;
            cout << "Enter amt that you want to add:";
            cin >> add;
            addParts(tools[no-1], add);
            display(tools, 10);
        }else if(action == 3){
            cout << "Enter item no. that you want to deduct on: ";
            cin >> no;
            cout << "Enter amt that you want to deduct:";
            cin >> add;
            deductParts(tools[no-1], add);
            display(tools, 10);
        }else if(action > 4 || action <= 0 ){
            exit(0);
        }
    }

}