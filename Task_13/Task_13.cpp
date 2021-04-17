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

	ofstream file;
	file.open("Task_13.txt");

	file << "Table x and y. \ny = -2 * x * x + 3 * x - 1" << endl
		<< "Enter x: " << endl;
	cin >> x;
	file << "Enter dx: " << endl;
	cin >> dx;
	file << "Enter fx: " << endl;
	cin >> fx;

	file << "\tx\t\ty\t" << endl;

	file.precision(3);

	while (x < dx) {
		f = -2 * x * x + 3 * x - 1;
		file << "\t"
			<< x
			<< "\t\t"
			<< f
			<< endl;
		x += fx;
	}
	return 0;

	file.close();
}