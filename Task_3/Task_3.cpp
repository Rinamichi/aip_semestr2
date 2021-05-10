/* Задание 3. 
Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого 
числа. */

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

float a, S, C;

float square (float a);
float cube(float a);

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream f;
    f.open("Task_3.txt");

    cin >> a;
    f << "Квадрат числа a = " << square(a) << endl;
    f << "Куб числа a = " << cube(a) << endl;

    f.close();
}

float square (float a) {
    S = pow(a, 2);
    return(S);
}

float cube(float a) {
    C = pow(a, 3);
    return(C);
}