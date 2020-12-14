#include <iostream>
using namespace std;
struct MovieData
{
    string Title,
        Director;
    int yearReleased,
        runningTime;
};
void displayData(MovieData);
int main()
{
    MovieData Titanic = {
        "titanic",
        "James Cameroon", 1995, 120};
    MovieData Tenet = {"Tenet", "Nolan", 2020, 150};
    displayData(Titanic);
    displayData(Tenet);

    return 0;
}
void displayData(MovieData movie){
    cout<<"the Movie's name is "<<movie.Title<<". The director is "<<movie.Director<<". It was released in "<<movie.yearReleased<<". The running time is "<<movie.runningTime<<endl;
}