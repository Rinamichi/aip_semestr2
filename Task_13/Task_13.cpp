/*Задание 13.
Протабулировать функцию (шаг и диапазон задаёт пользователь):
y = -2 * x * x + 3 * x - 1*/

#include <iostream>
#include "cmath"
#include "fstream"
#include "iomanip"

using namespace std;

struct parametr {
	float dx, x, fx, f;
};

void func(parametr A);

int main()
{
	parametr pA;

	func(pA);
}

void func(parametr A) {

	ofstream file;
	file.open("Task_13.txt");

	cin >> A.x;
	file << "Table x and y. \ny = -2 * x * x + 3 * x - 1" << endl
		<< "Enter x: " << A.x << endl;
	cin >> A.dx;
	file << "Enter dx: " << A.dx << endl;
	cin >> A.fx;
	file << "Enter fx: " << A.fx << endl;

	file << "\tx\t\ty\t" << endl;

	file.precision(3);

	while (A.x < A.dx) {
		A.f = -2 * A.x * A.x + 3 * A.x - 1;
		file << "\t"
			<< A.x
			<< "\t\t"
			<< A.f
			<< endl;
		A.x += A.fx;
	}

	file.close();
}