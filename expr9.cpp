#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) break;
        }
        if (j == len1) return i;
    }
    return -1;
}

int main() {
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];

    cout << "Enter the first string:" << endl;
    cin.getline(s1, MAX_LENGTH);
    cout << "Enter the second string:" << endl;
    cin.getline(s2, MAX_LENGTH);

    int result = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is ";
    if (result != -1) {
        cout << result << endl;
    }
    else {
        cout << result << endl;
    }

    return 0;
}