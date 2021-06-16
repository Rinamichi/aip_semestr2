/*Задание 26.
 Создать новый массив из двух других массивов путём операций над элементами
массивов: d.  деления.*/

#include <iostream>
#include "fstream"
#include "cmath"

using namespace std;

const int A = 7;
float arrA[A], arrB[A], arrC[A];

int main()
{
	ofstream f;
	f.open("Task_26.txt");
	setlocale(LC_ALL, "Russian");


	for (int i = 0; i < A; i++) {        //генерация массива со случайными элементами
			arrA[i] = rand() % 50;
		}

	for (int j = 0; j < A; j++) {        //генерация массива со случайными элементами
			arrB[j] = rand() % 10;
		}
	
	/*for (int i = 0; i < A; i++) {        
		for (int j = 0; j < A; j++) {       
			for (int c = 0; c < A; c++) {
					arrC[c] = arrA[i] / arrB[j];		
			}
		}
	}*/

	for (int k = 0; k < A; k++) {
		arrC[k] = arrA[k] / arrB[k];

	}
	f << "Massive A: " << endl;
	for (int i = 0; i < A; i++)
		f << arrA[i] << endl;

	f << "Massive B: " << endl;
	for (int j = 0; j < A; j++)
		f << arrB[j] << endl;

	f << "Massive C: " << endl;
	for (int c = 0; c < A; c++)
		f << arrC[c] << endl;

	f.close();
}