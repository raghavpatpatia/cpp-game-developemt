#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main()
{
    // Adding Words and Hints using Enum
    enum fields
    {
        WORD,
        HINT,
        NUM_FIELDS
    };
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
        {
            {"Teapot", "What begins with the letter 't', is full of 't' and finishes with 't'?"},
            {"Fire", "I like food, but water kills me. What am I?"},
            {"Candle", "I'm tall when I'm young, and I'm short when I'm old. What am I?"},
            {"Sponge", "What is full of holes but still holds water?"},
            {"Future", "What is always in front of you but can't be seen?"}};

    // Generating random word and hint of same random number
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    // Jumbling the word
    string jumble = theWord;
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    // Welcome the player
    cout << endl
         << "\t\t Welcome to Jumble Word" << endl
         << endl;
    cout << "Unscramble the letters to make a word....." << endl
         << endl;
    cout << "Enter \"hint\" for a hint." << endl
         << endl;
    cout << "Enter \"quit\" to quit the game." << endl
         << endl;

    string guess;
    cout << "Jumble word: " << jumble << endl
         << endl;
    cout << "Your guess: ";
    cin >> guess;

    // Game Loop
    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint")
        {
            cout << endl
                 << theHint << endl;
        }
        else
        {
            cout << endl
                 << "Sorry, wrong guess..." << endl;
        }
        cout << endl
             << "Your guess: ";
        cin >> guess;
    }

    // Ending statement
    if (guess == theWord)
    {
        cout << endl
             << "Congrats, You Won!!!" << endl;
    }
    cout << endl
         << "Thanks for playing." << endl;
    return 0;
}