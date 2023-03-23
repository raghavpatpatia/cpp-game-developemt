#include <iostream>

using namespace std;
int main()
{
    cout << "Count Forward:" << endl;
    for(int i = 0; i <= 10; i++)
    {
        cout << i << ' ';
    }
    cout << endl << endl << "Count Backward:" << endl;
    for(int i = 10; i >= 0; i--)
    {
        cout << i << ' ';
    }
    cout << endl << endl << "Counting Fives:" << endl;
    for(int i = 0; i <=50; i += 5)
    {
        cout << i << ' ';
    }
    cout << endl << endl << "Counting with null statements:" << endl;
    int count = 0;
    for ( ; count <= 10; )
    {
        cout << count << ' ';
        count++;
    }
    cout << endl << endl << "Counting inside nested for loop:" << endl;
    const int ROWS = 3;
    const int COLUMNS = 3;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            cout << '(' << i << ", " << j << ")\t";
        }
        cout << endl;
    }
    return 0;
}