// Ant2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 
#include <algorithm>
#include <unordered_set>
#include <set>

#include "Ant2.h"

int main()
{
    std::set < std::vector <unsigned int>> vSet;
    const unsigned int MaxSum = 25;
    unsigned int AntX{ 1000 }, AntY{ 1000 }, counter{ 0 };
    
    //all available Y with sequential order of X;
    for (unsigned int i = 1000; i <= MaxCoordinate(AntX, AntY, MaxSum); i++)
    {
        while (counter <= MaxSum)
        {
            vSet.insert({ i, AntY });
            AntY++;
            counter = Summ(i, AntY);
        }
        counter = 0;
        AntY = 1000;
    }
    
    //all available X with sequential order of Y;
    for (unsigned int i = 1000; i <= MaxCoordinate(AntY, AntX, MaxSum); i++)
    {
        while (counter <= MaxSum)
        {
            vSet.insert({ AntX, i });
            AntX++;
            counter = Summ(AntX, i);
        }
        counter = 0;
        AntX = 1000;
    }
    
    //result;
    std::cout << "Number of coordinates: " << vSet.size() << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
