#include<iostream>
using namespace std;

int main() {
	double a = 0;//�ܻ���
	int b = 0;//ƻ��������
	int c = 2;//ÿ�칺������
	int day = 1;
	while (c <= 100)
	{
		b = b + c;
		a = a + c;
		c = c * 2;
		day++;



	}
	double aver = a / day;
	cout << "ƽ��ÿ�컨�ѣ�" << aver << endl;

	system("pause");

	return 0;
}