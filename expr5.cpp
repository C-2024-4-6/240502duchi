#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numbers[10];  
    int validCount = 0;  

    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; ++i) {
        int num;
        cin >> num;
        bool isDuplicate = false;
        for (int j = 0; j < validCount; ++j) {
            if (numbers[j] == num) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            numbers[validCount] = num;
            validCount++;
        }
    }

    cout << "The distinct numbers are:" << endl;
    for (int i = 0; i < validCount; ++i) {
        cout << setw(6) << numbers[i];
    }
    cout << endl;

    return 0;
}