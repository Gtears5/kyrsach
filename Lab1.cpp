#include "dead.h"

void Lab1() {
	setlocale(0, "");
	cout << "Задание 1\n\n";
	cout << "int: " << sizeof(int) << "\n";
	cout << "short int: " << sizeof(short int) << "\n";
	cout << "long int: " << sizeof(long int) << "\n";
	cout << "float: " << sizeof(float) << "\n";
	cout << "double: " << sizeof(double) << "\n";
	cout << "long double: " << sizeof(long double) << "\n";
	cout << "char: " << sizeof(char) << "\n";
	cout << "bool: " << sizeof(bool) << "\n\n\n";


	cout << "Задание 2\n";
	int value;
	cin >> value;

	unsigned int order = sizeof(int) * 8;
	unsigned int mask = 1 << order - 1;
	for (int i = 1; i <= order; i++)
	{
		putchar(value & mask ? '1' : '0');
		value <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % order - 1 == 0)
		{
			putchar(' ');
		}
	}
	cout << "\n\n\n";

	cout << "Задание 3\n";

	union {
		float  value1;
		int a;
	};

	unsigned int order1 = sizeof(float) * 8;
	unsigned int mask1 = 1 << order1 - 1;
	cin >> value1;

	for (int j = 1; j <= order1; j++)
	{

		putchar(a & mask1 ? '1' : '0');
		a <<= 1;
		if (j % 8 == 0 || j == 9 || j == 1)
		{
			putchar(' ');
		}
		if (j % order1 - 1 == 0)
		{
			putchar(' ');
		}
	}
	cout << "\n" << "  |<--Эксп->|<--------Мантиса-------->|";
	cout << "\n\n\n";

}
