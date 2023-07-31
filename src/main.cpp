#include <iostream>
#include "MathLib.h"
#include "GreenVision/GV.hpp"

void FunctionalityN1();
void Drive();
void RipAndTear();
void FunctionThatWeDontNeed();

int main()
{
    std::cout << "Kind of project\n";
    FunctionalityN1();
    Drive();
    RipAndTear();

    std::cout << "5 x 6 = " << multiply(5, 6) << "\n";
    std::cout << "Your Green Vision is at level : " << GreenVision() << "\n";

    std::cin.get();
    return 0;
}

void FunctionalityN1()
{
    std::cout << "New feature number 1\n";
}

void Drive()
{
    std::cout << "it is written \"Drive here\" but actually I will drink and sleep\n"; 
}

void RipAndTear()
{
    std::cout << "Untill it is done\n";
}

void FunctionThatWeDontNeed()
{
    std::cout << "This function is just for restoring to previous branc\n";
}