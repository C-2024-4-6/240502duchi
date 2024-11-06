#include<iostream>
using namespace std;

int main() {

	int a, b;
	int i = 0;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	for (i = a > b ? a : b; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout << "最小公倍数：" << i << endl;
			break;
		}

	}
	cout << "最大公因数：" << a * b / i << endl;





	system("pause");

	return 0;
}