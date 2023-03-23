#include<iostream>

int main()
{
    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, JET_COST = 50};
    const int ALIEN_POINTS = 150;
    int aliensKilled = 20;
    shipCost myShipCost = BOMBER_COST;
    std::cout << "Score= " << (aliensKilled * ALIEN_POINTS) << std::endl; 
    std::cout << "Cost to upgrade a BOMBER_SHIP from a JET_SHIP is " << (JET_COST - myShipCost) << std::endl;
    return 0;
}