#pragma once

//Summ of numbers.
static unsigned int Summ(unsigned int x, unsigned int y)
{
    unsigned int SumX{ 0 }, SumY{ 0 }, n{ 0 }, m{ 0 };
    while (x != 0)
    {
        n = x % 10;
        SumX += n;
        x /= 10;
    }
    n = 0;
    while (y != 0)
    {
        n = y % 10;
        SumY += n;
        y /= 10;
    }
    return SumX + SumY;
}

//max available coordinate 
static unsigned int MaxCoordinate(unsigned int x, unsigned int y, unsigned int Sum)
{
    while (Summ(x, y) <= Sum)
    {
        ++x;        
    }
    return x-1;
}