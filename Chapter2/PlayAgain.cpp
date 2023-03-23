#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    char again = 'y';
    while (again == 'y')
    {
        cout << "Do you want to play again? (y/n): ";
        cin >> again;
    }
    cout << "Ok bye!";
    return 0;
}