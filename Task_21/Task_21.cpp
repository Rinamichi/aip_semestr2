/*Задание 21.
* Сгенерировать массив со случайными числами в диапазоне: d.[-10,20] 
*/

#include <iostream>
#include "stdlib.h"
#include "fstream"

using namespace std;

int main()
{
	ofstream f;
	f.open("Task_21.txt");

	const int n = 15;
	int arrA[n];

	for (int i = 0; i < n; i++) {
		arrA[i] = rand() % 31 - 10;
	}

	for (int i = 0; i < n; i++)
		f << arrA[i] << endl;

	f.close();
}