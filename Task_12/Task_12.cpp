/*Задание 12.
Протабулировать функцию (шаг и диапазон задаёт пользователь):
y = √2 + 3x  + 72x + tg(4x + 31)*/

#include <iostream>
#include <iomanip> 
#include "cmath"
#include "fstream"

using namespace std;

int main() {

	ofstream fail;
	fail.open("Task_12.txt");

	float dx, x, df, f;

	fail << "Table x and y. \ny = sqrt(2 + 3x)  + 72x + tg(4x + 31)" << endl;
	fail << "Enter x: " << endl;
	cin >> x;
	fail << "Enter df:" << endl;
	cin >> df;
	fail << "Enter dx: " << endl;
	cin >> dx;

	fail << "\tx\t\ty" << endl;

	fail.precision(3);

	while (x < df) {
		f = sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31);
		fail << "\t" 
			<< x
			<< "\t\t"
			<< f
			<< endl;
			 
		x += dx;
	}

	return 0;
}