#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void gcdAndLcm(int m, int n, int& lcm) {
    int greatestCommonDivisor = gcd(m, n);
    lcm = m * n / greatestCommonDivisor;
}
int main() {
    int m, n;
    cout << "请输入两个自然数m和n：";
    cin >> m >> n;
    
    int greatestCommonDivisor = gcd(m, n);
    cout << "最大公约数为: " << greatestCommonDivisor << endl;

   
    int lcm;
    gcdAndLcm(m, n, lcm);
    cout << "最小公倍数为: " << lcm << endl;

    return 0;
}