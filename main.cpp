#include<iostream>
using namespace std;

// �������� 5. �������� ��������, ��� �������� �� ����� 
// ������� �������� �� k, �� k � ����� �������.

int main()
{
	int k, res;
	cout << "Enter variant number (2-9) ->";
	cin >> k;
	for (size_t i = 2; i <= 9; i++)
	{
		res = k * i;
		cout << k << " * " << i << " = " << res << endl;
	}



	return 0;
}
