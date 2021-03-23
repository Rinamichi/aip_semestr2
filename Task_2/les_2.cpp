/* Задание 2.
Пользователь вводит параметры фигуры. Найти периметр и площадь фигуры: Эллипс. */

#include <iostream>
#include "cmath"
#include "fstream"

int main()
{
    std::ofstream f;
    f.open("Task_2.txt");
    
    
    float a, b, c, S, P;
    float Pi = 3.14;

    std:: cin >> a >> b;
    S = Pi * a * b;
    f << "Square of ellipse = " << S << std::endl;
    P = 4 * (((Pi * a * b) + ((a - b) * (a - b))) / (a + b));
    f << "Perimetre of ellipse = " << P;
    return 0;

    f.close();

    std::getchar();
    std::getchar();
}

