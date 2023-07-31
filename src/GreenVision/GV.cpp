#include "GV.hpp"
#include <random>
#include <time.h>

float GreenVision()
{
    srand(time(nullptr));

    return (float)(rand() % 100) / 100;
}