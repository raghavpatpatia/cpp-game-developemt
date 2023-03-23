// Lost Fortune 
// Final game of chapter 1
// It is an adventure game played on console.
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    // variable declaration

    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    // Information
    
    cout << "Welcome to Lost Fortune" << endl << endl;
    cout << "Please enter your details for your personalized adventures" << endl;
    cout << "Enter your Name: ";
    cin >> leader;
    cout << "\nEnter number of adventurers: ";
    cin >> adventurers;
    cout << "\nEnter a number, smaller than the first: ";
    cin >> killed;
    survivors = adventurers - killed;

    // Story
    
    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << "-– in search of the lost treasure of the Ancient Dwarves. ";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader;
    cout << ", and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << " were vanquished, ";
    cout << "leaving just " << survivors << " in the group.\n";
    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout << " pieces to keep things fair of course.\n";
    return 0;
}