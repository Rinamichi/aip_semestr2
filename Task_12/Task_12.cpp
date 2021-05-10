/*Задание 12.
Протабулировать функцию (шаг и диапазон задаёт пользователь):
y = sqrt(2 + 3 * x) + 72 * x + tg(4 * x + 31)*/

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

void func(parametr A){

	ofstream file;
	file.open("Task_12.txt");

	cin >> A.x;
	file << "Table x and y. \ny = sqrt(2 + 3 * x) + 72 * x + tg(4 * x + 31)" << endl
		<< "Enter x: " << A.x << endl;
	cin >> A.dx;
	file << "Enter dx: " << A.dx << endl;
	cin >> A.fx;
	file << "Enter fx: " << A.fx << endl;

	file << "\tx\t\ty\t" << endl;

	file.precision(3);

	while (A.x < A.dx) {
		A.f = sqrt(2 + 3 * A.x) + 72 * A.x + tan(4 * A.x + 31);
		file << "\t"
			<< A.x
			<< "\t\t"
			<< A.f
			<< endl;
		A.x += A.fx;
	}

	file.close();
}