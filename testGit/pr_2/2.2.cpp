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

    // Заповнення масиву
    std::cout << "Введіть масив: ";
    for (int i = 0; i < length; ++i) {
        std::cin >> arr[i];
    }

    // Заміна негативних елементів на позитивні
    replaceNegativeWithPositive(arr, length);

    // Виведення результатів
    std::cout << "Заданий масив: ";
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
