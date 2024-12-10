#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);  
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;  
        }
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char s[MAX_LENGTH];
    int counts[26] = { 0 }; 

    cout << "Enter a string: ";
    cin.getline(s, MAX_LENGTH);
    count(s, counts);

    cout << "字符串中各字母出现的次数如下（非零次数显示）：" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}