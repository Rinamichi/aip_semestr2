/*Задание 15.
Пользователь задаёт число Ч и Х. Посчитать y.*/

#include <iostream>
#include "fstream"

using namespace std;

float x, Ч, dy;
int i = 7;
int a = 2;
float y = 0;

int main()
{
	ofstream fail;
	fail.open("Task_15.txt");

	setlocale(LC_ALL, "Russian");
	fail << "Введите Ч(нечётное и больше 7): " << endl;
	cin >> Ч;
	fail << "Введите x: " << endl;
	cin >> x;

	while (i < Ч) {
		dy = (a + 1) / (i * x);
		a = a + 1;
		i = i + 2;
		y = y + dy;

		fail << "dy = " << dy << endl
		     << "i = " << i << endl
			 << "a = " << a << endl;
	}

	fail << "y = " << y << endl;

	return 0;

	fail.close();
}
