#include<iostream>
using namespace std;

//  �������� 2. �������� ��������, ��� ������ ��� �����
//  ����� x � y, ���� ���� �������� � �������� �������� x �
//  ������ y.


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
