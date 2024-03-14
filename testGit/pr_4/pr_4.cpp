#include <iostream>

bool SortCheck(int* arr, int sizeOfArr) {

	for (int i = 0; i < sizeOfArr-1; ++i) {
		if (arr[i] > arr[i + 1]) {
			return true;
		}
		else {
			return false;
		}
	}

}

int main() {

	const int arrSize = 10;
	int user_value, count(0);

	int* arr = new int[arrSize];

	for (int i = 0; i < arrSize; ++i) {
		arr[i] = rand() % 7;
	}

	for (int i = 0; i < arrSize; ++i) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "Enter some int value: ";
	std::cin >> user_value;

	for (int i = 0; i < arrSize; ++i) {
		if (arr[i] == user_value) {
			std::cout << "Arr with index [" << i << "] equal your value ' " << user_value << " '" << std::endl;
			break;
		}
	}

	std::cout << "--------------" << std::endl;

		for (int start = 0, end = arrSize - 1; start < arrSize / 2; ++start, --end) {
			std::swap(arr[start], arr[end]);
		}

	std::cout << "--------------" << std::endl;

	for (int i = 0; i < arrSize; ++i) {
			std::cout << arr[i] << " ";
		}

	std::cout << std::endl; 

	if (SortCheck(arr,arrSize)) {
		std::cout << "The array is sorted in descending order!" << std::endl;
	}
	else {
		std::cout << "Array is`nt sorted in descending order!" << std::endl;
	}

	std::cout << "--------------" << std::endl;

	std::cout << "Left [0]" << arr[0] << std::endl;
	std::cout << "Right[9]" << arr[9] << std::endl;
	std::cout << "Center [5] and [6]: " << arr[5] << " ; " << arr[6] << std::endl;

	delete[] arr;

	return 0;
}