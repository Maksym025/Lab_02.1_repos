//Lab_02.cpp
//������� ������
// ����������� ������ �2.
//˳��� ���������
//������ 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; //������� ��������
	double z1;// ��������� ������� ��������
	double z2;// ��������� ������� ��������
	double Pi = 4 * atan(1.0);// ����� ϳ

	cout << "a = "; cin >> a;

	double cos2 = pow(cos((3.0 / 8) * Pi - (a / 4.0)), 2);
	double cos21 = pow(cos((11.0 / 8) * Pi + (a / 4.0)), 2);
	z1 = cos2 - cos21;
	z2 = (sqrt(2) / 2.0) * (sin(a / 2.0));//(����� 2)/2 * �����(������� ��������/2)
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;//���� ���������� ������� �������� � �������
	cin.get();
	return 0;
}
