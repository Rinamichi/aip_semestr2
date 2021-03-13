#include <iostream>
#include "cmath"
#include "fstream"

int main()
{

    std::ofstream f;
    f.open("Task_4.txt");

    float x = -2;

    f << "Evaluate the expression: " << std::endl;
    f << fabs(x) + pow(x, 5) << std::endl;
    return 0;

    f.close();

    std::getchar();
    std::getchar();
}


