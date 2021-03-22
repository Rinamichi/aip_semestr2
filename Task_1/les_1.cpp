/*Задание 1.
  Вывести на экран Первую букву имени из символов "*" (звездочка) */

#include <iostream>
#include "fstream"

using namespace std;

int main()
{
        ofstream f;
        f.open("Task_1.txt");

      f << "    ***  " << endl
        << "   *  ** " << endl
        << "      ** " << endl
        << "     * * " << endl
        << "     * * " << endl
        << "   **  * " << endl
        << "   **  * " << endl
        << "   *   * " << endl
        << "  ****** " << endl
        << "  *    * " << endl
        << "  *    * " << endl
        << "**     **" << endl;

        f.close();

    return 0;
}