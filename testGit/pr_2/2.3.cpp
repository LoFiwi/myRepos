#include <iostream>

void withdraw(int amount, int denominations[], int counts[]) {
    for (int i = 0; i < 10; ++i) {
        int count = amount / denominations[i];
        if (count > counts[i]) {
            count = counts[i];
        }
        amount -= count * denominations[i];
        std::cout << denominations[i] << " ���: " << count << " ��." << std::endl;
    }
}

int main() {
    int amount;
    int denominations[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int counts[10];

    // �������� ����
    std::cout << "������ ����: ";
    std::cin >> amount;

    // �������� ������� ����� ������� �������
    for (int i = 0; i < 10; ++i) {
        std::cout << "������ ������� ����� " << denominations[i] << " ���: ";
        std::cin >> counts[i];
    }

    // ������ ���� ��������
    withdraw(amount, denominations, counts);

    return 0;
}
