#include<iostream>
using namespace std; 

// �������� 1. �������� ��������, ��� �������� ���� �����
//����� �� � �� 500 (�������� a ��������� � ���������).

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
