#include <iostream>

using std::cout;
using std::endl;
int main()
{
    if (true)
    {
        cout << "This line will always be displayed." << endl;
    }
    
    if (false)
    {
        cout << "This line will never be displayed." << endl;
    }

    int score = 1000;
    if (score)
    {
        cout << "At least you didn't score 0." << endl;
    }

    if (score >= 250)
    {
        cout << "You scored 250 or above -> Decent work." << endl;
    }

    if (score >= 500)
    {
        cout << "You scored 500 or above -> Nice work." << endl;
        if (score >= 1000)
        {
            cout << "You scored 1000 -> Impressive!!" << endl;
        }
    }
    return 0;
}