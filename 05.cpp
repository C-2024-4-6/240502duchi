#include<iostream>
using namespace std;

int main() {
	int ywzm = 0;
	int kg = 0;
	int szzf = 0;
	int qtzf = 0;
	char ch;
	cout << "请输入一行字符：" << endl;
	while ((ch = cin.get() != '\n'))
	{
		if((ch>='a'&&ch<='z')||(ch >= 'A' && ch <= 'Z'))
		{
			ywzm++;
		}
		else if (ch == ' ')
		{
			kg++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			szzf++;
		}
		else
		{
			qtzf++;
		}
	}
	cout << "英文字母个数为：" << ywzm << endl;
	cout << "空格个数为：" << kg << endl;
	cout << "数字字符个数为：" << szzf << endl;
	cout << "其他字符个数为：" << qtzf << endl;




	system("pause");

	return 0;
}