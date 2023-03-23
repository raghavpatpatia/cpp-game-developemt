#include<iostream>

int main()
{
    typedef unsigned short int ushort;
    ushort score = 5000;
    std::cout << "Score = " << score << std::endl;
    // adding 100 to score
    score += 100;
    std::cout << "Score + 100 = " << score << std::endl;
    // increment operators => ++ / --
    ushort lives = 3;
    lives++;
    std::cout << "Lives = " << lives << std::endl;
    ++lives;
    std::cout << "Lives = " << lives << std::endl;
    return 0;
}