/*Задание 24.
Увеличить все нечётные элементы массива на 3, а чётные в 2 раза */

#include <iostream>
#include "fstream"

using namespace std;

const int n = 20;
int arrA[n];
int num;

int main() {

	ofstream f;
	f.open("Task_24.txt");
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < n; i++) {        //генерация массива со случайными элементами
		arrA[i] = rand() % 30;

		if ((arrA[i] % 2) == 0) {
			num = arrA[i] * 2;
		}
		else {
			num = arrA[i] * 3;
		}

		f << "Первоначальное значение масссива: " 
		     << arrA[i] << endl;
		f << "Изменненое значение массива: "
			 << num << endl;
		f << endl;
	}

	f.close();
}