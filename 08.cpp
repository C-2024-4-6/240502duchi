#include <iostream>


using namespace std;

int main() {
    double a;
    cout << "������һ������";
    cin >> a;

    if (a < 0) {
        cout << "�������Ϊ��������ƽ����Ϊ�������޷��ô˷�����⡣" << endl;
        return 0;
    }

    double xn = a;
    double xn1 = (xn + a / xn) / 2;
    while (abs(xn1 - xn) >= 1e-5) {
        xn = xn1;
        xn1 = (xn + a / xn) / 2;
    }

    cout << a << "��ƽ����ԼΪ" << xn1 << endl;
    return 0;
}