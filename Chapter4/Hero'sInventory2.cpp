#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    vector<string> inventory;
    inventory.push_back("Sword");
    inventory.push_back("Shield");
    inventory.push_back("Armor");

    cout << endl
         << "You have " << inventory.size() << " items in your inventory..." << endl
         << endl;
    cout << "Your items in inventory: " << endl;
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }
    cout << endl
         << "You traded your sword for Twin-Blades..." << endl
         << endl;
    inventory[0] = "Twin-Blades";
    cout << "Your items in inventory: " << endl;
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << endl
         << "Twin-Blades has " << inventory[0].size() << " letters." << endl
         << endl;
    cout << "Your Armor got destroyed in the battle..." << endl
         << endl;
    inventory.pop_back();
    cout << "Your items in inventory: " << endl;
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << endl
         << "You got robbed by the thief of all your possessions..." << endl
         << endl;
    inventory.clear();
    if (inventory.empty())
    {
        cout << "You have nothing left in the inventory..." << endl
             << endl;
    }
    else
    {
        cout << "You have something in your inventory..." << endl
             << endl;
    }
    return 0;
}