/* Задание 2.
Пользователь вводит параметры фигуры. Найти периметр и площадь фигуры: Эллипс. */

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

struct parametr {
    float a, b;
};

float S, P;
float Pi = 3.14;

float square(parametr A);
float perimetre(parametr A);

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream f;
    f.open("Task_2.txt");
    
    parametr pA;

    cin >> pA.a >> pA.b;

    f << "Длина большей полуоси = " << pA.a << endl;
    f << "Длина меньшей полуоси = " << pA.b << endl;
	f << "Площадь эллипса = " << square(pA) << endl;
    f << "Периметр эллипса = " << perimetre(pA);

    f.close();
}

float square(parametr A) {
    S = Pi * A.a * A.b;
    return (S);
}

float perimetre(parametr A) {
    P = 4 * (((Pi * A.a * A.b) + ((A.a - A.b) * (A.a - A.b))) / (A.a + A.b));
    return (P);
}