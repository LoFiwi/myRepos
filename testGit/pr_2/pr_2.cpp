#include <iostream>
#include <cmath>

int main() {
    const int length = 10 + 2;
    int X[length], Y[length];
    int M;

    // Заповнення масиву X
    std::cout << "Введіть масив X: ";
    for (int i = 0; i < length; ++i) {
        std::cin >> X[i];
    }

    // Введення числа M
    std::cout << "Введіть число M: ";
    std::cin >> M;

    // Формування масиву Y
    int newYIndex = 0;
    for (int i = 0; i < length; ++i) {
        if (std::abs(X[i]) > M) {
            Y[newYIndex] = X[i];
            ++newYIndex;
        }
    }

    // Виведення результатів
    std::cout << "Число M: " << M << std::endl;
    std::cout << "Масив X: ";
    for (int i = 0; i < length; ++i) {
        std::cout << X[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Масив Y: ";
    for (int i = 0; i < newYIndex; ++i) {
        std::cout << Y[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
