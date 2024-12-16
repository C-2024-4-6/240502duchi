#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x =60,int y = 80):x(x),y(y){}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point point(60, 80);
	point.display();
	point.setPoint(20, 2);
	point.display();
	return 0;
}