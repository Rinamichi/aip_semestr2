/*Задание 13.
Протабулировать функцию (шаг и диапазон задаёт пользователь):
y = -2 * x * x + 3 * x - 1*/

#include <iostream>
#include "cmath"
#include "fstream"
#include "iomanip"

using namespace std;

float dx, x, fx, f;

int main()
{

	ofstream fail;
	fail.open("Task_13.txt");

	fail << "Table x and y. \ny = -2 * x * x + 3 * x - 1" << endl
		<< "Enter x: " << endl;
	cin >> x;
	fail << "Enter dx: " << endl;
	cin >> dx;
	fail << "Enter fx: " << endl;
	cin >> fx;

	fail << "\tx\t\ty\t" << endl;

	fail.precision(3);

	while (x < dx) {
		f = -2 * x * x + 3 * x - 1;
		fail << "\t"
			<< x
			<< "\t\t"
			<< f
			<< endl;
		x += fx;
	}
	return 0;

	fail.close();
}