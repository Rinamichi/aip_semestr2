/*Задание 12.
Протабулировать функцию (шаг и диапазон задаёт пользователь):
y = sqrt(2 + 3 * x) + 72 * x + tg(4 * x + 31)*/

#include <iostream>
#include "cmath"
#include "fstream"
#include "iomanip"

using namespace std;

float func(float x);

int main()
{
	float dx, x, fx, f;

	ofstream file;
	file.open("Task_12.txt");

	cin >> x;
	file << "Table x and y. \ny = sqrt(2 + 3 * x) + 72 * x + tg(4 * x + 31)" << endl
		<< "Enter x: " << x << endl;
	cin >> dx;
	file << "Enter dx: " << dx << endl;
	cin >> fx;
	file << "Enter fx: " << fx << endl;

	file << "\tx\t\ty\t" << endl;

	file.precision(3);

	while (x < dx) {
		f = func(x);
		file << "\t"
			<< x
			<< "\t\t"
			<< f
	    	<< endl;
		x += fx;
	}

	file.close();
}

float func(float x){

	return sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31);
}