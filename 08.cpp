#include <iostream>


using namespace std;

int main() {
    double a;
    cout << "请输入一个数：";
    cin >> a;

    if (a < 0) {
        cout << "输入的数为负数，其平方根为虚数，无法用此方法求解。" << endl;
        return 0;
    }

    double xn = a;
    double xn1 = (xn + a / xn) / 2;
    while (abs(xn1 - xn) >= 1e-5) {
        xn = xn1;
        xn1 = (xn + a / xn) / 2;
    }

    cout << a << "的平方根约为" << xn1 << endl;
    return 0;
}