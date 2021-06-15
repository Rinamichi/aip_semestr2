/*Задание 23.
 Найти номер минимального/максимального по модулю элемента. */

#include <iostream>
#include "fstream"

using namespace std;

int main()
{
	ofstream f;
	f.open("Task_23.txt");

	const int n = 20;
	int arrA[n];
	int res = 0;

	for (int i = 0; i < n; i++) {        //генерация массива со случайными элементами
		arrA[i] = rand() % 30-10;

		if (abs(arrA[i]) > abs(arrA[i - 1])) {
			res = i;
		}
	}

	f << "Massive" << endl;
	for (int i = 0; i < n; i++)
		f << arrA[i] << endl;

	f <<"Max: "<< res << endl;

	f.close();
}

