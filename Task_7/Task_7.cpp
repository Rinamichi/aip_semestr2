/* Задание 7.
Дана функция y=f(x). Найти значение функции по x: 
y = 2x 2  + 10, если x > 5
y = 0, если x = 0
y = 2 * |x+6| - x 2 , если x < 5 */

#include <iostream>
#include "fstream"

using namespace std;

int main()
{
	ofstream f;
	f.open("Task_7.txt");

	float y, x;
	cin >> x;
	if (x > 5)
		y = 2 * (x * x) +10;
	else {
		if (fabs(x) < 0.001)
			y = 0;
		else {
			y = 2 * fabs(x + 6) - x * x;
		}
	}

	f << "y = " << y;

	f.close();
}
