#include<iostream>
using namespace std;

int main() {
	double a, b;
	cout << "������Ҫ�����������������" << endl;
	cin >> a >> b;
	char ch;
	cout << "��ѡ�����㷽ʽ��" << endl;
	cin >> ch;
	switch (ch)
	{
	case('+'):
		cout << "a+b=" << a + b << endl;
		break;
	case('-'):
		cout << "a-b=" << a - b << endl;
		break;
	case('*'):
		cout << "a*b=" << a * b << endl;
		break;
	case('/'):
		if (b == 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else
		{
			cout << "a/b=" << a / b << endl;
		}
	case('%'):
		if (static_cast<int>(b) == 0)
		{
			cout << "�޷�����" << endl;
		}
		else
		{
			cout << "a%b=" <<static_cast<int>( a) %static_cast<int>( b) << endl;
		}


	}





	system("pause");

	return 0;

}