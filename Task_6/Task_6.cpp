#include <iostream>

using namespace std;

int main()
{	
	float num, num2, num3;

	std::cin >> num >> num2 >> num3;
	if ((num > num2) && (num > num3))
		cout << "So, num is the biggest then num + 5: " << num + 5 << endl;
	if ((num2 > num) && (num2 > num3))
		cout << "So, num2 is the biggest then num2 + 5: " << num2 + 5 << endl;
	if ((num3 > num) && (num3 > num2))
		cout << "So, num3 is the biggest then num3 + 5: " << num3 + 5 << endl;

	if ((num < num2) && (num < num3))
		cout << "So, num is the smallest then num - 3: " << num - 3 << endl;
	if ((num2 < num) && (num2 < num3))
		cout << "So, num2 is the smallest then num2 - 3: " << num2 - 3 << endl;
	if ((num3 < num) && (num3 < num2))
		cout << "So, num3 is the smallest then num3 - 3: " << num3 - 3 << endl;
	return 0;
}


