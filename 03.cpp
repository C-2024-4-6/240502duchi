#include<iostream>
using namespace std;

int main() {

	double a, b, c;
	cout << "�����������ε������ߣ�" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�����ε��ܳ�Ϊ��" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
	}
	else
	{
		cout << "�����޷�����������" << endl;
	}


	system("pause");

	return 0;

}