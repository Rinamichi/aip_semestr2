/* Задание 10.
Дана функция y=f(x). Найти значение функции по x:
y = (2+x) 2  + 7, если x > -8
y = 5, если x = -8
y = |2 * x-1| - 1, если x < -8 */

#include <iostream>
#include "fstream"

using namespace std;

int main()
{

	ofstream f;
	f.open("Task_10.txt");

	float y, x;
	cin >> x;
	if (x > -8)
		y = ((2 + x) * (2 + x)) + 7;
	else {
		if (x == -8)
			y = 5;
		else {
			y = fabs(2 * x - 1) - 1;
		}
	}

	f << "y = "  << y;
	
	f.close();
}