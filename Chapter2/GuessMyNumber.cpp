#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;
    cout << "\t\tWelcome to Guess my Number" << endl;
    do
    {
        cout << "Enter your number: ";
        cin >> guess;
        tries++;
        if (guess > randomNumber)
        {
            cout << "Too High!" << endl << endl; 
        }
        else if (guess < randomNumber)
        {
            cout << "Too Low!" << endl << endl;
        }
        else
        {
            cout << "You guessed the number in " << tries << " tries." << endl;
        }
    }while (guess != randomNumber);
    return 0;
}