/*Задание 18.
 Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести 
данные о самом тяжёлом роботе. 
*/

#include <iostream>
#include "fstream"
#include "fstream"

using namespace std;

struct Robot
{
	float weight;
	float size;
	float maxspeed;
};

float largest(Robot a, Robot b);

int main()
{
	setlocale(LC_ALL, "Russsian");
	Robot Ra, Rb;

	cin >> Ra.weight >> Rb.weight;
	cin >> Ra.size >> Rb.size;
	cin >> Ra.maxspeed >> Rb.maxspeed;

	largest(Ra, Rb);
}

float  largest(Robot a, Robot b) {

	ofstream file;
	file.open("Task_18.txt");

	file << "Вес первого робота: " << a.weight << endl;
	file << "Вес второго робота: " << b.weight << endl;

	if (a.weight > b.weight) {
		file << "Исходя из сравнений, робот а самый большой." << endl;
	}
	else {
		file << "Исходя из сравнений, робот b самый большой." << endl;
	}
	return 0;

	file.close();
}