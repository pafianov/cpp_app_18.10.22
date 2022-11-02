#include<iostream>
using namespace std; 

// Завдання 1. Напишіть програму, яка обчислює суму цілих
//чисел від а до 500 (значення a вводиться з клавіатури).

int main()
{
	
	int a, sum=0;
	cout << "Enter a -> ";
	cin >> a;
	for (size_t i = a; i <= 500; i++)
	{
		sum += i;
	}
	cout << "RES = " << sum << endl;	

		
	return 0;
}
