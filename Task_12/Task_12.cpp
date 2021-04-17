/*Задание 12.
Протабулировать функцию (шаг и диапазон задаёт пользователь):
y = sqrt(2 + 3 * x) + 72 * x + tg(4 * x + 31)*/

#include <iostream>
#include "cmath"
#include "fstream"
#include "iomanip"

using namespace std;

float dx, x, fx, f;

int main()
{

	ofstream file;
	file.open("Task_12.txt");

	file << "Table x and y. \ny = sqrt(2 + 3 * x) + 72 * x + tg(4 * x + 31)" << endl
		<< "Enter x: " << endl;
	cin >> x;
	file << "Enter dx: " << endl;
	cin >> dx;
	file << "Enter fx: " << endl;
	cin >> fx;

	file << "\tx\t\ty\t" << endl;

	file.precision(3);

	while (x < dx) {
		f = sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31);
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