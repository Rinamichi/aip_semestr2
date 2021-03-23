/* Задание 4.
Вычислите значение выражения: |x| + x^5 , если x=−2. Ответ: -30*/

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

int main()
{
    ofstream f;
    f.open("Task_4.txt");

    float x = -2;

    f << "Evaluate the expression: " << endl;
    f << fabs(x) + pow(x, 5) << endl;
    return 0;

    f.close();
}


