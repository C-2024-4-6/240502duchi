#include <iostream>
#include <iomanip>
using namespace std;
bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    for (int i = 2; count < 200; ++i) {
        if (is_prime(i)) {
            cout << setw(10) << i;
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }
    return 0;
}