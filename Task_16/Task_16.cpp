/*Задание 16.
Пользователь задаёт число c и x. Посчитать y.*/

#include <iostream>
#include "cmath"
#include "fstream"

using namespace std;

float x, c, dy;
int a = 0;
int n = 3;
float y = 0;
float ty = 0;
  
int main()
{

	fstream file;
	file.open("Task_16.txt");

	setlocale(LC_ALL, "Russian");
	file << "Введите c (нечётное): " << endl;
	cin >> c;
	file << "Введите x: " << endl;
	cin >> x;

	while (n < c) {

		int F = 1;

		for (int i = 1; i <= n; i++) {
			F *= i;
		}

		dy = pow(-1, a + 1) * (pow(x, n)/F);
		n = n + 2;
		a = a + 1;
		ty = ty + dy;

		file << "Выведем ty = " << ty << endl
			<< "Выведем a = " << a << endl
			<< "Выведем n = " << n << endl
		    << endl;
	} 

	y = x + ty;
	 
	file << "Выведем финальный y: " << y << endl;

	file.close();
}