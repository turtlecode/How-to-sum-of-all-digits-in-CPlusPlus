#include <iostream>

int main() {
	int number, sum = 0, remainder;

	std::cout << "Enter a number :";
	std::cin >> number;

	while (number > 0)
	{
		remainder = number % 10;
		sum = sum + remainder;
		number = number / 10;
	}
	std::cout << sum;

	return 0;
}
