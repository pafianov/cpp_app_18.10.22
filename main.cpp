#include<iostream>
using namespace std;

// Завдання 3. Знайти середнє арифметичне всіх цілих чисел 
// від 1 до 1000.

int main()
{
	int sum=0, res;
	for (size_t i = 1; i <= 1000; i++)
	{
		sum += i;
		res = sum / i;
	}
	cout << "Res-> " << res << endl;
	return 0;
}
