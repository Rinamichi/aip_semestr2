/* Задание 7.
Дана функция y=f(x). Найти значение функции по x: 
y = 2x 2  + 10, если x > 5
y = 0, если x = 0
y = 2 * |x+6| - x 2 , если x < 5 */

#include <iostream>
#include "fstream"

using namespace std;

float y, x;

float condition(float x);

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream f;
	f.open("Task_7.txt");

	cin >> x;

	f << "y = " << condition(x);

	f.close();
}

float condition(float x) {

	if (x > 5)
		y = 2 * (x * x) + 10;
	else {
		if (fabs(x) < 0.001)
			y = 0;
		else {
			y = 2 * fabs(x + 6) - x * x;
		}
	}
	return(y);
}