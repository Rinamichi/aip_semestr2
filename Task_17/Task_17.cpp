/*Задание 17.
  Создайте структуру для хранения комплексных чисел. Структура должна иметь 2 
атрибута: вещественную часть и мнимую. Объявите два числа и получите их 
значения от пользователя.  
b.  Напишите функцию, которая будет возвращать комплексно-сопряжённое
число.
*/

#include <iostream>
#include "complex"
#include "fstream"

using namespace std;

struct numbers {
	float a, b;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream file;
	file.open("Task_17.txt");

	numbers nA, nB;

	cin >> nA.a >> nB.b;
	complex <double> z(nA.a, nB.b);
	file << "Комплексное число в виде вектора: "<< z << endl;
	file << "Выведем комплексно-сопряжённое (в виде вектора): " << conj(z) << endl;

	file.close();
}