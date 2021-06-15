/*Задание 22.
* Вычислить сумму элементов массива: a.  больших 5, меньших 7, больших 3.
*/

#include <iostream>
#include "fstream"

using namespace std;

int main()
{
	ofstream f;
	f.open("Task_22.txt");

	int Sumb5 = 0;
	int Sumb3 = 0;
	int Sums7 = 0;

	const int n = 20;
	int arrA[n];
	 
	for (int i = 0; i < n; i++) {        //генерация массива со случайными элементами
		arrA[i] = rand() % 30;
	}

	for (int i = 0; i < n; i++)
		f << arrA[i] << endl;

	f << endl;


	for (int i = 0; i < n; i++) {
		if (arrA[i] > 5)
			Sumb5 = Sumb5 + arrA[i];
	}

	for (int i = 0; i < n; i++) {
		if (arrA[i] < 7)
			Sums7 = Sums7 + arrA[i];
	}

	for (int i = 0; i < n; i++) {
		if (arrA[i] > 3)
			Sumb3 = Sumb3 + arrA[i];
	}

	f << "Sum bigger 5 = " << Sumb5 << endl;
	f << endl;
	f << "Sum smaller 7 = " << Sums7 << endl;
	f << endl;
	f << "Sum bigger 3 = " << Sumb3 << endl;

	f.close();
}