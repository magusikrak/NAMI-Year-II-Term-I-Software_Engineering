#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int a = 0 + rand()%1000, prediction, counter = 0;
retry:
    cout <<"Guess the number: ";
    cin >> prediction;
    if(a > prediction){
        cout << "Lower!! Please try again" << endl;
        counter++;
        goto retry;
    }else if(a < prediction){
        cout << "Highrt!! Please try again" << endl;
        counter++;
        goto retry;
    }else{
        cout << "Guessed Correctly" << endl << "Predicted amount: " <<  counter;
    }

}
