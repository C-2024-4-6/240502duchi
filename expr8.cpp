#include <iostream>
using namespace std;

// 合并两个已排序数组的函数
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0;
    while (i < size1 || j < size2) {
        if (j >= size2 || list1[i] < list2[j]) list3[i + j] = list1[i++];
        else list3[i + j] = list2[j++];
    }
}

int main() {
    const int MAX_SIZE = 80;
    int list1[MAX_SIZE];
    int list2[MAX_SIZE];
    int list3[MAX_SIZE * 2];

    int size1, size2;

    cout << "Enter list1:" << endl;
    cin >> size1;
    for (int i = 0; i < size1; i++) cin >> list1[i];

    cout << "Enter list2:" << endl;
    cin >> size2;
    for (int i = 0; i < size2; i++) cin >> list2[i];

    merge(list1, size1, list2, size2, list3);

    cout << "The merged list is:" << endl;
    for (int i = 0; i < size1 + size2; i++) cout << list3[i] << " ";
    cout << endl;

    return 0;
}