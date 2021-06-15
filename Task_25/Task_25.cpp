/*Задание 25.
 Увеличить все отрицательные элементы на 5, а положительные уменьшить на 1 */

#include <iostream>
#include "fstream"

using namespace std;

const int n = 20;
int arrA[n];
int num;

int main()
{
	ofstream f;
	f.open("Task_25.txt");
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < n; i++) {        //генерация массива со случайными элементами
		arrA[i] = rand() % 20 - 10;

		if (arrA[i] >= 0) {
			num = arrA[i] - 1;
		}
		else {
			num = arrA[i] + 5;
		}

		f << "Первоначальное значение масссива: "
			<< arrA[i] << endl;
		f << "Изменненое значение массива: "
			<< num << endl;
		f << endl;
	}
	f.close();
}