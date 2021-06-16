/*Задание 28.
Преобразовать  матрицу,  умножив  элементы  каждой  строки  на  значение  второго
элемента этой строки.*/
#include <iostream>
#include "fstream"

using namespace std;

int main()
{
	ofstream f;
	f.open("Task_28.txt");
	setlocale(LC_ALL, "Russian");

	int mat[7][7];
	int mat2[7][7];

	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++)
			mat[i][j] = rand() % 10;

	f << "Исходная матрица: " << endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++)
			f << mat[i][j] << " ";
		f << endl;
	}

	f << endl;

	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++)
			mat2[i][j] = mat[i][j] * mat[i][1];

	f << "Преобразованная матрица: " << endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++)
			f << mat2[i][j] << " ";
		f << endl;
	}

	f.close();
}
