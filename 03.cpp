#include<iostream>
using namespace std;

int main() {

	double a, b, c;
	cout << "请输入三角形的三条边：" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "三角形的周长为：" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "三边无法构成三角形" << endl;
	}


	system("pause");

	return 0;

}