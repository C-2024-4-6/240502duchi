#include<iostream>
using namespace std;

int main() {

	double x;
	cout << "ÇëÎªx¸³Öµ£º" << endl;
	cin >> x;
	if (0 < x < 1)
	{
		cout << "y=" << 3 - 2 * x << endl;
	}
	else if (1 <= x <= 5)
	{
		cout << "y=" << 0.5 / x + 1 << endl;
	}
	else if (5 <= x < 10)
	{
		cout << "y=" << x * x << endl;
	}

	system("pause");

	return 0;
}