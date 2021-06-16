/*Задание 30.
Дана матрица.  Элементы первой строки — мощность электромотора, второй строки
— категория мотора (число от 1 до 3). Найти самый мощный мотор категории 3. */

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream f;
	f.open("Task_30.txt");

	int max = 70;
	int matrix[2][10]; 

	srand(0);

	for (int i = 0; i < 2; i++) { 
		for (int j = 0; j < 10; j++) {
			matrix[0][j] = rand() % 98;
			matrix[1][j] = rand() % 3 + 1;
		}
	}

	f << "Производительность двигателя: " << endl;
	f << endl;

	for (int i = 0; i < 2; i++) { 
		for (int j = 0; j < 10; j++) {
			f << matrix[i][j] << "  ";
		}
		f << endl;
	}

	f << endl;

	for (int j = 0; j < 10; j++) { 
		if (matrix[1][j] == 3) {
			for (int j = 0; j < 10; j++) {
				if (matrix[0][j] > max) {
					max = matrix[0][j];
					f << "Максимум: " << max << " ";
				}
			}
		}
	}
	f << endl;
	f << " " << endl;
	f << endl;

	f.close();
}