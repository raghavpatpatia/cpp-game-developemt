#include <iostream>
#include <string>

using namespace std;
int main()
{
    const int MAX_ITEM = 10;
    string inventory[MAX_ITEM];

    int itemNum = 0;
    inventory[itemNum++] = "Sword";
    inventory[itemNum++] = "Armor";
    inventory[itemNum++] = "Shield";
    
    cout << endl << "Your items in inventory:" << endl;
    for (int i = 0; i < itemNum; i++)
    {
        cout << inventory[i] << endl;
    }

    cout << endl << "You Traded your Sword for a Twin-Blades." << endl << endl;
    inventory[0] = "Twin-Blades";
    cout << "Your items in inventory:" << endl;
    for (int i = 0; i < itemNum; i++)
    {
        cout << inventory[i] << endl;
    }

    cout << endl << "Letters in \"Twin-Blades\": " << inventory[0].size() << endl;

    cout << endl << "You found a \"Healing Potion (high-grade)\"" << endl << endl;
    if (itemNum < MAX_ITEM)
    {
        inventory[itemNum++] = "Healing Potion (high-grade)";
    }
    else
    {
        cout << endl << "Your inventory is full..." << endl;
    }

    cout << "Your items in inventory:" << endl;
    for (int i = 0; i < itemNum; i++)
    {
        cout << inventory[i] << endl;
    }
    return 0;
}