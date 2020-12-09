#include <iostream>
using namespace std;
struct MovieData
{
    string title,
        director;
    int year,
        runningTime;

};
void display(MovieData);
// {

// }
 int main()
{
    MovieData m1,m2;
    m1={"Nami","text",2020,150};
    cout<<m1.title;
    return 0;
}