#include <iostream>
#include <algorithm>

int binSearch(int *arr, int arrSize, int value) {
	int left = 0;
	int right = arrSize - 1;
	int middle;
	int result = -1;

	while (left < right - 1) {
		middle = 1 + (right - 1) / 2;

		if (arr[middle] == value) {
			result = value;
			break;
		}
		else if (arr[middle] > value) {
			right = middle - 1;
		}
		else {
			left = middle + 1;
		}
	}

	if (result != -1) {
		return result;
	}
}

int interSearch(int* arr, int arrSize, int value) {

	int left = 0, result(-1);
	int right = arrSize - 1;
	int currPos = 0;
	bool isFound;

	for (isFound = false; (arr[left] < value) && (arr[right] > value) && !isFound;) {
		currPos = left + ((value - arr[left]) * (right - left)) / (arr[right] - arr[left]);

		if (arr[currPos] < value) {
			left = currPos + 1;
		}
		else if(arr[currPos] > value) {
			right = currPos - 1;
		}
		else {
			isFound = true;
		}
	}

	if (result != -1) {
		return result;
	}

}

int main() {

	const int size_arr = 10;
	int find_value, user_sizeArr;

	int* arr = new int[size_arr];

	for (int i = 0; i < size_arr; ++i) {
		std::cout << "Element [" << i << "] >> ";
		std::cin >> arr[i];
	}

	std::cout << "Enter value to find it in array >> ";
	std::cin >> find_value;

	for (int i = 0; i < size_arr; ++i) {
		if (arr[i] == find_value) {
			std::cout << "Found! Element with index [" << i << "] has same value '" << find_value << "'" << std::endl;
			break;
		}
	}

	find_value = -1;

	std::cout << "Now try to find a second one element >> ";
	std::cin >> find_value;	

	for (int i = 0; i < size_arr; ++i) {
		if (arr[i] == find_value) {
			std::cout << "Found! Element with index [" << i << "] has same value '" << find_value << "'" << std::endl;
			break;
		}
	}

	std::cout << "********************************" << std::endl;

	std::cout << "Enter size of array >> ";
	std::cin >> user_sizeArr;

	std::cout << "Enter value to find it in array >> ";
	std::cin >> find_value;

	int* secArr = new int[user_sizeArr];

	for (int i = 0; i < user_sizeArr; ++i) {
		secArr[i] = rand() % 101;
	}

	for (int i = 0; i < user_sizeArr; ++i) {
		std::cout << secArr[i] << std::endl;
	}

	if (user_sizeArr < 21) {
	std::sort(secArr, secArr + user_sizeArr);

		if (binSearch(secArr, user_sizeArr, find_value) == find_value) {
			std::cout << "Found!" << std::endl;
		}
		else {
			std::cout << "Can`t found" << std::endl;
		}
	}

	else if (user_sizeArr < 101) {
		if (interSearch(secArr, user_sizeArr, find_value) == find_value) {
			std::cout << "Found!" << std::endl;
		}
		else {
			std::cout << "Can`t found" << std::endl;
		}
	}

	return 0;
}