#include <iostream>
int monkeyPeach(int day) {
    if (day == 10) {
        return 1;
    }
    else {
        return (monkeyPeach(day + 1) + 1) * 2;
    }
}

int main() {
    int firstDayPeach = monkeyPeach(1);
    std::cout << "��һ����ӹ�ժ�� " << firstDayPeach << " ������" << std::endl;

    return 0;
}