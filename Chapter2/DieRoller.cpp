#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seeds unique random numbers
    int randomNumber = rand(); // Generate random numbers
    int die = (randomNumber % 6) + 1; // Get a number between 1 to 6 from random generated numbers
    cout << "You rolled number: " << die << endl;
    return 0;
}