#include<iostream>
using namespace std;

// Завдання 1. Підрахувати кількість цілих чисел у діапазоні 
// від 100 до 999, які мають дві однакові цифри.

int main()
{
	int a=0;
	int i1, i2, i3;
	for (size_t i = 100; i <= 1000; i++)
	{
		i1 = i / 100;
		i2 = i % 10;
		i3 = (i % 100) / 10;
		if (i1 == i2);
		if (i2 == i3);
		if (i3 == i1);
		a++;

	}
	cout << "Result:" << a << endl;


	return 0;
}
