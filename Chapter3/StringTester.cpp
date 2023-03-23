#include <iostream>
#include <string>

using namespace std;
int main()
{
    string word1 = "Game";
    string word2("Over");
    string word3(3, '!');
    string phrase = word1 + ' ' + word2 + word3;
    cout << endl << "The phrase is: " << phrase << endl << endl;
    cout << "Characters in the phrase: " << phrase.size() << endl << endl;
    cout << "Character at phrase[0] position: " << phrase[0] << endl << endl;
    cout << "changing character at phase[0] to 'L': ";
    phrase[0] = 'L';
    cout << phrase << endl << endl;
    for (unsigned int i = 0; i < phrase.size(); ++i)
    {
        cout << "Character at position " << i << " of phrase is: " << phrase[i] << endl;
    }
    cout << endl << "The word 'Over' starts at: " << phrase.find("Over") << "th position" << endl << endl;
    if (phrase.find("eggplant") == string::npos)
    {
        cout << "eggplant is not in the phrase" << endl << endl;
    }
    phrase.erase(4, 5);
    cout << "Current phrase: " << phrase << endl << endl;
    phrase.erase(4);
    cout << "Current phrase: " << phrase << endl << endl;
    phrase.erase();
    cout << "Current phrase: " << phrase << endl << endl;
    if (phrase.empty())
    {
        cout << "Phrase is no more..." << endl;
    }
    return 0;
}