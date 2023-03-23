#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    char again = 'y';
    do
    {
        cout << "Do you want to play again? (y/n): ";
        cin >> again;
    }while(again == 'y');
    cout << "Ok bye!";
    return 0;
}