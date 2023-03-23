#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string userName;
    string password;
    bool success;
    cout << "_________________________Designer's Network_________________________" << endl;
    do
    {
        cout << "Enter UserName: ";
        cin >> userName;
        cout << "Enter Password: ";
        cin >> password;
        if (userName == "Raghav" && password == "27072001r@gh@v")
        {
            cout << "Welcome, Raghav!" << endl;
            success = true;
        }
        else if (userName == "RaghavP." && password == "27072001")
        {
            cout << "Welcome, RaghavP!" << endl;
            success = true;
        }
        else if (userName == "guest" && password == "guest")
        {
            cout << "Welcome, Guest" << endl;
            success = true;
        }
        else
        {
            cout << "Login Failed!!" << endl;
            success = false;
        }
    }while(!success);
    return 0;
}