/* Задание 8.
Напишите  программу,  которая  принимает  от  пользователя  координаты  точки  и 
определяет, попала ли точка в заштрихованную область. */

#include <iostream>
#include "fstream"

using namespace std;

int main()
{
    ofstream f;
    f.open("Task_8.txt");

    const float r = 1;
    float x, y;
    cin >> x >> y;
    float rc = sqrt(x * x + y * y);

    bool area1 = (rc < r) && (y > x);
    bool area2 = (rc < r) && (x > y) && (x < 0);

    if (area1 || area2)
        f << "Yes";
    else
        f << "No";

    f.close();
}