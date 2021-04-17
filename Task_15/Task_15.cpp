/*Задание 15.
Пользователь задаёт число c и x. Посчитать y.*/

#include <iostream>
#include "fstream"

using namespace std;

float x, c, dy;
int i = 7;
int a = 2;
float y = 0;

int main()
{
	ofstream file;
	file.open("Task_15.txt");

	setlocale(LC_ALL, "Russian");
	file << "Введите c(нечётное и больше 7): " << endl;
	cin >> c;
	file << "Введите x: " << endl;
	cin >> x;
	file << endl;

	while (i < c) {
		dy = (a + 1) / (i * x);
		a = a + 1;
		i = i + 2;
		y = y + dy;

		file << "dy = " << dy << endl
		     << "i = " << i << endl
			 << "a = " << a << endl;
		file << endl;
	}

	file << "y = " << y << endl;

	return 0;

	file.close();
}
