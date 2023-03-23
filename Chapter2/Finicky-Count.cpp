#include<iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    short int count = 0;
    while (true)
    {
        count++;
        if (count > 10)
        {
            break;
        }
        else if (count == 5)
        {
            continue;
        }
        cout << count << endl;
    }
    return 0;
}