#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    int choice;
    cout << "Difficulty Levels:" << endl;
    cout << "1) Easy " << endl;
    cout << "2) Medium" << endl;
    cout << "3) Hard" << endl;
    cout << "Choose (1, 2, or 3): ";
    cin >> choice;
    switch (choice)
    {
        case 1:
        cout << endl << "You choose Easy." << endl;
        break;
        case 2:
        cout << endl << "You choose Medium." << endl;
        break;
        case 3:
        cout << endl << "You choose Hard." << endl;
        break;
        default:
        cout << endl << "Wrong choice!" << endl;
        break;
    }
    return 0;
}