#include <iostream>
#include <cmath>
#include "fstream"

int a;

int main()
{

    std::ofstream f;
    f.open("Task_5.txt");

    f << "If you need from Gcal / min to cal/h tap 1" <<'\n';
    f << "If you need from Gcal / min to J/h tap 2" << '\n';
    f << "If you need from Gcal / min to erg/sec tap 3" << '\n';
    f << "If you need from cal/h to Gcal / min tap 4" << '\n';
    f << "If you need from cal/h to J/h tap 5" << '\n';
    f << "If you need from cal/h to erg/sec tap 6" << '\n';
    f << "If you need from J/h to Gcal / min tap 7" << '\n';
    f << "If you need from J/h to cal/h tap 8" << '\n';
    f << "If you need from J/h to erg/sec tap 9" << '\n';
    f << "If you need from erg/sec to Gcal / min tap 10" << '\n';
    f << "If you need from erg/sec to cal/h tap 11" << '\n';
    f << "If you need from erg/sec to J/h tap 12" << '\n';
    std:: cin >> a;

    switch(a)
    {
    case 1:
        float a;
        f << "Enter your number : " << std::endl;
        std::cin >> a;
        f << a * 6 * pow(10, 10) << '\n';
        break;

    case 2:
        float b;
        f << "Enter your number : " << std::endl;
        std::cin >> b;
        f << b * 2.5121 * pow(10, 11) << '\n';
        break;

    case 3:
        float c;
        f << "Enter your number : " << std::endl;
        std::cin >> c;
        f << c * 6.978 * pow(10, 14) << '\n';
        break;

    case 4:
        float d;
        f << "Enter your number : " << std::endl;
        std::cin >> d;
        f << d * 1.667 * pow(10, -11) << '\n';
        break;

    case 5:
        float j;
        f << "Enter your number : " << std::endl;
        std::cin >> j;
        f << j * 4.187 << '\n';
        break;

    case 6:
        float g;
        f << "Enter your number : " << std::endl;
        std::cin >> g;
        f << g * 11630 << '\n';
        break;

    case 7:
        float x;
        f << "Enter your number : " << std::endl;
        std::cin >> x;
        f << x * 3.981 * pow(10, -12) << '\n';
        break;
    
    case 8:
        float y;
        f << "Enter your number : " << std::endl;
        std::cin >> y;
        f << y * 0.2388  << '\n';
        break;

    case 9:
        float z;
        f << "Enter your number : " << std::endl;
        std::cin >> z;
        f << z * 2778 << '\n';
        break;

    case 10:
        float p;
        f << "Enter your number : " << std::endl;
        std::cin >> p;
        f << p * 1.433 * pow(10, -15) << '\n';
        break;

    case 11:
        float n;
        f << "Enter your number : " << std::endl;
        std::cin >> n;
        f << n * 8.598 * pow(10, -5) << '\n';
        break;

    case 12:
        float m;
        f << "Enter your number : " << std::endl;
        std::cin >> m;
        f << m * 3.6 * pow(10, -4) << '\n';
        break;
    }
    return 0;

    f.close();

    }
