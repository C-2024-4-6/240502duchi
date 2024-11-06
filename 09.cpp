#include<iostream>
using namespace std;

int main() {
	double a = 0;//总花费
	int b = 0;//苹果总数量
	int c = 2;//每天购买数量
	int day = 1;
	while (c <= 100)
	{
		b = b + c;
		a = a + c;
		c = c * 2;
		day++;



	}
	double aver = a / day;
	cout << "平均每天花费：" << aver << endl;

	system("pause");

	return 0;
}