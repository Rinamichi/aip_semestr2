/* Задание 11.
Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
*/

#include <iostream>
#include "fstream"

using namespace std;

float H;

int main()
{

    ofstream f;
    f.open("Task_11.txt");

    cin >> H;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < i; j++)
            f << 0;
        f << endl;
    }

    cout << endl;

    f.close();
}
        