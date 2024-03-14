#include <iostream>


int main() {

	const int arrSize = 10;
	int user_value, count(0);

	int* arr = new int[arrSize];

	for (int i = 0; i < arrSize; ++i) {
		std::cout << "arr [" << i << "] >> ";
		std::cin >> arr[i];
	}

	std::cout << "Now enter some int value: ";
	std::cin >> user_value;

	for (int i = 0; i < arrSize; ++i) {
		if (arr[i] == user_value) {
			std::cout << "Arr with index [" << i << "] equal your value ' " << user_value << " '" << std::endl;
			break;
		}
	}

	for (int i = 0; i < arrSize; ++i) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}

	std::cout << "Even numbers in array: " << count << std::endl;

	delete[] arr;

	return 0;
}