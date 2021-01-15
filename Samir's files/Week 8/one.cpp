#include <iostream>
using namespace std;
struct MovieData{
    string title, director;
    int year, runningtime;

};
void display(MovieData m){
    cout << "Title : " << m.title << "\n"
         << "Director: " << m.director << "\n"
         << "Year: " << m.year << "\n"
         << "Running Time: " << m.runningtime << "\n";

}
int main(){
    MovieData m1, m2;
    m1 = {"Hello", "World", 2019, 120};
    display(m1);

}
