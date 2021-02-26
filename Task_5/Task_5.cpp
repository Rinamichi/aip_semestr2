#include <iostream>
#include <cmath>

int a;

int main()
{
    std::cout << "If you need from Gcal / min to cal/h tap 1" <<'\n';
    std::cout << "If you need from Gcal / min to J/h tap 2" << '\n';
    std::cout << "If you need from Gcal / min to erg/sec tap 3" << '\n';
    std::cout << "If you need from cal/h to Gcal / min tap 4" << '\n';
    std::cout << "If you need from cal/h to J/h tap 5" << '\n';
    std::cout << "If you need from cal/h to erg/sec tap 6" << '\n';
    std::cout << "If you need from J/h to Gcal / min tap 7" << '\n';
    std::cout << "If you need from J/h to cal/h tap 8" << '\n';
    std::cout << "If you need from J/h to erg/sec tap 9" << '\n';
    std::cout << "If you need from erg/sec to Gcal / min tap 10" << '\n';
    std::cout << "If you need from erg/sec to cal/h tap 11" << '\n';
    std::cout << "If you need from erg/sec to J/h tap 12" << '\n';
    std::cin >> a;

    switch(a)
    {
    case 1:
        float a;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> a;
        std::cout << a * 6 * pow(10, 10) << '\n';
        break;

    case 2:
        float b;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> b;
        std::cout << b * 2.5121 * pow(10, 11) << '\n';
        break;

    case 3:
        float c;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> c;
        std::cout << c * 6.978 * pow(10, 14) << '\n';
        break;

    case 4:
        float d;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> d;
        std::cout << d * 1.667 * pow(10, -11) << '\n';
        break;

    case 5:
        float f;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> f;
        std::cout << f * 4.187 << '\n';
        break;

    case 6:
        float g;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> g;
        std::cout << g * 11630 << '\n';
        break;

    case 7:
        float x;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> x;
        std::cout << x * 3.981 * pow(10, -12) << '\n';
        break;
    
    case 8:
        float y;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> y;
        std::cout << y * 0.2388  << '\n';
        break;

    case 9:
        float z;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> z;
        std::cout << z * 2778 << '\n';
        break;

    case 10:
        float p;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> p;
        std::cout << p * 1.433 * pow(10, -15) << '\n';
        break;

    case 11:
        float n;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> n;
        std::cout << n * 8.598 * pow(10, -5) << '\n';
        break;

    case 12:
        float m;
        std::cout << "Enter your number : " << std::endl;
        std::cin >> m;
        std::cout << m * 3.6 * pow(10, -4) << '\n';
        break;
    }
    return 0;
    }
