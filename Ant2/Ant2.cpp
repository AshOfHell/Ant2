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
    const unsigned int MaxSum = 25;
    unsigned int AntX{ 1000 }, AntY{ 1000 }; 
    std::vector <std::vector <unsigned int>> Coord{ {AntX, AntY} };
    std::set < std::vector <unsigned int>> vCoord{ {AntX, AntY} };
    
    while (!Coord.empty())
    {
        //Y++
        if ((Summ(Coord.front().at(0), Coord.front().at(1) + 1) <= MaxSum) && (vCoord.find({ Coord.front().at(0), Coord.front().at(1) + 1 }) == vCoord.end()))
        {
            vCoord.insert({ Coord.front().at(0), Coord.front().at(1) + 1 });
            Coord.push_back({ Coord.front().at(0), Coord.front().at(1) + 1 });
        }
        //X++
        if ((Summ(Coord.front().at(0) + 1, Coord.front().at(1)) <= MaxSum) && (vCoord.find({ Coord.front().at(0) + 1, Coord.front().at(1) }) == vCoord.end()))
        {
            vCoord.insert({ Coord.front().at(0) + 1, Coord.front().at(1) });
            Coord.push_back({ Coord.front().at(0) + 1, Coord.front().at(1) });
        }
        Coord.erase(Coord.begin());
    }
    
    //result;
    std::cout << "Number of coordinates: " << vCoord.size() << std::endl;

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
