#include<iostream>
using namespace std;

int main() {

	int a, b;
	int i = 0;
	cout << "������������������" << endl;
	cin >> a >> b;
	for (i = a > b ? a : b; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout << "��С��������" << i << endl;
			break;
		}

	}
	cout << "���������" << a * b / i << endl;





	system("pause");

	return 0;
}