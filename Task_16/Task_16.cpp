/*Задание 16.
Пользователь задаёт число Ч и Х. Посчитать y.*/

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

float x, num, dy;
int a = 0;
int n = 3;
float y = 0;
float ty = 0;

int main()
{

	fstream fail;
	fail.open("Task_16.txt", std::ios::out | std::ios::in);

	setlocale(LC_ALL, "Russian");
	fail << "Введите Ч (нечётное): " << endl;
	fail << n;
	fail << "Введите x: " << endl;
	fail << x;

	while (n < num) {

		int F = 1;

		for (int i = 1; i <= n; i++) {
			F *= i;
		}

		dy = pow(-1, a + 1) * (pow(x, n)/F);
		n = n + 2;
		a = a + 1;
		ty = ty + dy;

		fail << "Выведем ty = " << ty << endl
			<< "Выведем a = " << a << endl
			<< "Выведем n = " << n << endl
		    << endl;
	} 

	y = x + ty;
	 
	fail << "Выведем финальный y: " << y << endl;

	fail.close();
}

