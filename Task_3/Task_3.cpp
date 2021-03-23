/* Задание 3. 
Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого 
числа. */

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

int main()
{
    ofstream f;
    f.open("Task_3.txt");

    float a;

    cin >> a;
    f << "Square of number a = " << pow(a, 2) << endl;
    f << "Cube of number a = " << pow(a, 3) << endl;
    return 0;

    f.close();
}


