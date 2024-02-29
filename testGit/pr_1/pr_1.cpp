#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	//1
	int firstNum = 1, secondNum = 2, thirdNum = 3;

	if (firstNum == 1 || firstNum == 2) {
		std::cout << firstNum << std::endl;
	}
	else if (secondNum == 2 || secondNum == 1) {
		std::cout << secondNum << std::endl;
	}
	else if (thirdNum == 1 || thirdNum == 2) {
		std::cout << thirdNum << std::endl;
	}

	//2

	int one = 5, two = 10, three = 1;

	if (one < two && one < three) {
		std::cout << one << std::endl;
	}
	else if (two < one && two < three) {
		std::cout << two << std::endl;
	}
	else {
		std::cout << three << std::endl;
	}

	//3

	int n;
	double sum = 0.0;

	std::cout << "������ ������� �������� (n): ";
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		double term = i % 2 == 0 ? 1.0 : -0.5;
		std::cout << term << " ";
		sum += term;
	}

	std::cout << "\n���� �������� ����: " << sum << std::endl;

	//4

	int num;

	std::cout << "������ ���� ����� (�� ����� 2): ";
	std::cin >> num;

	int i = 2;
	while (i <= num) {
		if (num % i == 0) {
			std::cout << "��������� ����������� ������: " << i << std::endl;
			break;
		}
		++i;
	}

	//5

	int n;

	std::cout << "������ ������� ����� ���� Գ�������: ";
	std::cin >> n;

	int a = 0, b = 1;

	std::cout << "����������� Գ�������: ";
	for (int i = 0; i < n; ++i) {
		std::cout << a << " ";
		int temp = a + b;
		a = b;
		b = temp;
	}

	std::cout << std::endl;

	//6

	srand(static_cast<unsigned int>(time(0)));

	int target = rand() % 21;
	int guess, attempts = 0;

	while (true) {
		std::cout << "������ ����� �� 0 �� 20: ";
		std::cin >> guess;

		if (guess < 0 || guess > 20) {
			std::cout << "������ ��������!!!" << std::endl;
			continue;
		}

		++attempts;

		if (guess < target) {
			std::cout << "������������� ����� ����� ����������" << std::endl;
		}
		else if (guess > target) {
			std::cout << "������������� ����� ����� ����������" << std::endl;
		}
		else {
			std::cout << "�� ������� ����� � " << attempts << " ����" << std::endl;
			break;
		}
	}


	return 0;
}