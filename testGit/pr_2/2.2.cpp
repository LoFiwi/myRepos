#include <iostream>

void replaceNegativeWithPositive(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
}

int main() {
    const int length = 10 + 2;
    int arr[length];

    // ���������� ������
    std::cout << "������ �����: ";
    for (int i = 0; i < length; ++i) {
        std::cin >> arr[i];
    }

    // ����� ���������� �������� �� ��������
    replaceNegativeWithPositive(arr, length);

    // ��������� ����������
    std::cout << "������� �����: ";
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
