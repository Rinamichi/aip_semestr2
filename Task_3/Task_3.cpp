#include <iostream>
#include "cmath"
#include "fstream"

int main()
{

    std::ofstream f;
    f.open("Task_3.txt");

    float a;

    std::cin >> a;
    f << "Square of number a = " << pow(a, 2) << std::endl;
    f << "Cube of number a = " << pow(a, 3) << std::endl;
    return 0;

    f.close();

    std::getchar();
    std::getchar();
}


