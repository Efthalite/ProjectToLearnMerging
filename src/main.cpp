#include <iostream>


void FunctionalityN1();
void Drive();
void FunctionThatWeDontNeed();

int main()
{
    std::cout << "Kind of project\n";
    FunctionalityN1();
    Drive();

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

void FunctionThatWeDontNeed()
{
    std::cout << "This function is just for restoring to previous branc\n";
}