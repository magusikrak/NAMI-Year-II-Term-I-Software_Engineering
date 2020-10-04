#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
void showNumbers(int, int, bool, bool);

using namespace std;
int main()
{
    char c;
    srand((unsigned int)time(NULL));
    int num1, num2;
    num1 = rand() % 1000;
    num2 = rand() % 1000;
    showNumbers(num1, num2, true, false);
    cout << "Press enter to show answer\n";
    // cin >> c;
    cin.get(c);
    showNumbers(num1, num2, false, true);

    return 0;
}
void showNumbers(int num1, int num2, bool showQuestion, bool showAnswer)
{
    int answer = num1 + num2;
    if (showQuestion == true)
    {
        cout << " " << num1 << endl;
        cout << "+" << num2 << endl;
        cout << "-------" << endl;
    }
    if (showAnswer == true)
    {
        cout << " " << num1 << endl;
        cout << "+" << num2 << endl;
        cout << "-------" << endl;
        cout << answer << endl;
    }
}
