#include<iostream>
using namespace std;

//  Завдання 2. Напишіть програму, яка запитує два цілих
//  числа x і y, після чого обчислює і виводить значення x у
//  степені y.


int main()
{
	int base, exponent, res = base = 1;
	cout << "Enter base ->";
	cin >> base;
	cout << "Enter exponent ->";
	cin >> exponent;
	for (size_t i = 1; i <= exponent; i++)
	{
		res = base * res;
	}
	cout << "Exponention -> " << res << endl;



	return 0;
}
