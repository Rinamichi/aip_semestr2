/*Задание 19.
   Имеется информация о датчиках: диапазон измеряемых значений (min, max), 
   погрешность, максимальная скорость. Вывести среднюю погрешность работы двух 
   датчиков.*/

#include <iostream>
#include "fstream"

using namespace std;

struct Sensor {
	float range;
	float errorrate;
	float maxspeed;
};

float arerage(Sensor a, Sensor b);

int main()
{
	ofstream file;
	file.open("Task_19.txt");

	setlocale(LC_ALL, "Russian");
	Sensor sa, sb;

	cin >> sa.range >> sb.range;
	cin >> sa.errorrate >> sb.errorrate;
	cin >> sa.maxspeed >> sb.maxspeed;

	file << "Выведем среднюю арифметическую погрешность: " << arerage(sa, sb) << endl;

	file.close();
}

float arerage(Sensor a, Sensor b) {
	return (a.errorrate + b.errorrate) / 2;
}