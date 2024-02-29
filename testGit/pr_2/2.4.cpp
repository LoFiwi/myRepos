#include <iostream>

void mergeAndSortArrays(int arr1[], int arr2[], int length1, int length2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < length1 && j < length2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        }
        else {
            result[k++] = arr2[j++];
        }
    }

    while (i < length1) {
        result[k++] = arr1[i++];
    }

    while (j < length2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    const int length1 = 10, length2 = 2;
    int arr1[length1], arr2[length2], result[length1 + length2];

    // Заповнення першого масиву
    std::cout << "Введіть перший масив: ";
    for (int i = 0; i < length1; ++i) {
        std::cin >> arr1[i];
    }

    // Заповнення другого масиву
    std::cout << "Введіть другий масив: ";
    for (int i = 0; i < length2; ++i) {
        std::cin >> arr2[i];
    }

    // Формування третього масиву у порядку зростання
    mergeAndSortArrays(arr1, arr2, length1, length2, result);

    // Виведення результатів
    std::cout << "Заданий масив 1: ";
    for (int i = 0; i < length1; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Заданий масив 2: ";
    for (int i = 0; i < length2; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Отриманий масив: ";
    for (int i = 0; i < length1 + length2; ++i) {
        std::cout << result[i] << " ";
    }

