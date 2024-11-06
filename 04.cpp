#include<iostream>
using namespace std;

int main() {
	double a, b;
	cout << "请输入要参与运算的两个数：" << endl;
	cin >> a >> b;
	char ch;
	cout << "请选择运算方式：" << endl;
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
			cout << "除数不能为0" << endl;
		}
		else
		{
			cout << "a/b=" << a / b << endl;
		}
	case('%'):
		if (static_cast<int>(b) == 0)
		{
			cout << "无法运算" << endl;
		}
		else
		{
			cout << "a%b=" <<static_cast<int>( a) %static_cast<int>( b) << endl;
		}


	}





	system("pause");

	return 0;

}