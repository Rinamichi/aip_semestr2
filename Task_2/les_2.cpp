#include <iostream>
#include "cmath"

int main()
{
    float a, b, c, S, P;
    float Pi = 3.14;

    std::cin >> a >> b;
    S = Pi * a * b;
    std::cout << "Square of ellipse = " << S << std::endl;
    P = 4 * (((Pi * a * b) + ((a - b) * (a - b))) / (a + b));
    std::cout << "Perimetre of ellipse = " << P;
    return 0;

    std::getchar();
    std::getchar();
}

