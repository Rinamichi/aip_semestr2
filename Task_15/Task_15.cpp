/*Задание 15.
Пользователь задаёт число c и x. Посчитать y.*/

#include <iostream>
#include "fstream"

using namespace std;

struct parametr {
	float x, c, dy;
};

void func(parametr A);

int i = 7;
int a = 2;
float y = 0;

int main()
{
	parametr pA;

	func(pA);
}

void func(parametr A){

	ofstream file;
	file.open("Task_15.txt");

	setlocale(LC_ALL, "Russian");
	cin >> A.c;
	file << "Введите c(нечётное и больше 7): " << A.c << endl;
	cin >> A.x;
	file << "Введите x: " << A.x << endl;
	file << endl;

	while (i < A.c) {
		A.dy = (a + 1) / (i * A.x);
		a = a + 1;
		i = i + 2;
		y = y + A.dy;

		file << "dy = " << A.dy << endl
			 << "i = " << i << endl
			 << "a = " << a << endl;
		file << endl;
	}

	file << "y = " << y << endl;

	file.close();
}
