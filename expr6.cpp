#include <iostream>
using namespace std;

// ��������Ԫ�صĺ���
void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

// ð��������
void bubbleSort(double arr[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}
int main() {
    double arr[10];
    cout << "������10��˫�������֣�" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, 10);
    cout << "����������Ϊ��" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}