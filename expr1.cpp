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
    cout << "������������Ȼ��m��n��";
    cin >> m >> n;
    
    int greatestCommonDivisor = gcd(m, n);
    cout << "���Լ��Ϊ: " << greatestCommonDivisor << endl;

   
    int lcm;
    gcdAndLcm(m, n, lcm);
    cout << "��С������Ϊ: " << lcm << endl;

    return 0;
}