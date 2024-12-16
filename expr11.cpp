#include <iostream>
using namespace std;
int parseHex(const char* hexString);
int main() {
    const int size = 256;
    char hexString[size];

    cout << "Enter a hexadecimal number: ";
    cin.getline(hexString, size); 

    int decimal = parseHex(hexString);
    if (decimal != -1) {
        cout << "The decimal value is: " << decimal << endl;
    }
    else {
        cout << "Invalid hexadecimal number." << endl;
    }

    return 0;
}
int parseHex(const char* hexString) {
    if (hexString[0] == '0' && (hexString[1] == 'x' || hexString[1] == 'X')) {
        hexString += 2; 
    }

    int decimal = 0;
    while (*hexString) {
        char c = *hexString++;
        int value = 0;
        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else {
            return -1; 
        }
        decimal = decimal * 16 + value;
    }
    return decimal;
}