#include<iostream>
using namespace std;

// Завдання 4. Знайти здобуток усіх цілих чисел від a до 20 
// (значення a вводиться з клавіатури : 1 <= a <= 20).

int main()
{
	int a=1,sum=0;
	cout << "Enter a ->";
	cin >> a;
	for (size_t i = a; i <= 20; i++)
	{
		sum += i;
	}
	cout << "Res = " << sum << endl;


	return 0;
}
