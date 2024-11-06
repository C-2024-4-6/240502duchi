#include<iostream>
using namespace std;

int main() {
	int line = 5;
	for (int a = 1; a <= line; ++a)
	{
		for (int b = 1; b <= a; ++b)
		{
			cout << "*";
		}
		cout << endl;
	}



	system("pause");

	return 0;

}