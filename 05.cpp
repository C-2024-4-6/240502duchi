#include<iostream>
using namespace std;

int main() {
	int ywzm = 0;
	int kg = 0;
	int szzf = 0;
	int qtzf = 0;
	char ch;
	cout << "������һ���ַ���" << endl;
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
	cout << "Ӣ����ĸ����Ϊ��" << ywzm << endl;
	cout << "�ո����Ϊ��" << kg << endl;
	cout << "�����ַ�����Ϊ��" << szzf << endl;
	cout << "�����ַ�����Ϊ��" << qtzf << endl;




	system("pause");

	return 0;
}