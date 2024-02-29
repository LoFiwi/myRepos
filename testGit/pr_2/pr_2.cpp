#include <iostream>
#include <cmath>

int main() {
    const int length = 10 + 2;
    int X[length], Y[length];
    int M;

    // ���������� ������ X
    std::cout << "������ ����� X: ";
    for (int i = 0; i < length; ++i) {
        std::cin >> X[i];
    }

    // �������� ����� M
    std::cout << "������ ����� M: ";
    std::cin >> M;

    // ���������� ������ Y
    int newYIndex = 0;
    for (int i = 0; i < length; ++i) {
        if (std::abs(X[i]) > M) {
            Y[newYIndex] = X[i];
            ++newYIndex;
        }
    }

    // ��������� ����������
    std::cout << "����� M: " << M << std::endl;
    std::cout << "����� X: ";
    for (int i = 0; i < length; ++i) {
        std::cout << X[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "����� Y: ";
    for (int i = 0; i < newYIndex; ++i) {
        std::cout << Y[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
