#include<iostream>
using namespace std;

int main() {

	char ch;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		cout << static_cast<char>(ch - 32 )<< endl;
	}
	else
	{
		cout << static_cast<int>(ch + 1) << endl;
	}



	system("pause");

	return 0;

}