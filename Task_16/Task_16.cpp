/*Задание 16.
Пользователь задаёт число c и x. Посчитать y.*/

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

struct parametr {
	float x, c, dy;
};

int a = 0;
int n = 3;
float y = 0;
float ty = 0;

int main()
{
	parametr A;

	fstream file;
	file.open("Task_16.txt");

	setlocale(LC_ALL, "Russian");
	cin >> A.c;
	file << "Введите c (нечётное): " << A.c << endl;
	cin >> A.x;
	file << "Введите x: " << A.x << endl;

	while (n < A.c) {

		int F = 1;

		for (int i = 1; i <= n; i++) {
			F *= i;
		}

		A.dy = pow(-1, a + 1) * (pow(A.x, n) / F);
		n = n + 2;
		a = a + 1;
		ty = ty + A.dy;

		file << "Выведем ty = " << ty << endl
			<< "Выведем a = " << a << endl
			<< "Выведем n = " << n << endl
			<< endl;
	}

	y = A.x + ty;

	file << "Выведем финальный y: " << y << endl;

	file.close();
}