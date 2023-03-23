#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if (score >= 100)
    {
        cout << endl << "congrats! you scored a perfect score." << endl;
    }
    else
    {
        cout << "You scored less than 100. Better luck next time!!" << endl;
    }
    return 0;
}