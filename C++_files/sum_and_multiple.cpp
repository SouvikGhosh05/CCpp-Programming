#include <iostream>
int main()
{
	float a, b, sum, mul;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	sum = a + b;
	mul = a * b;
	std::cout << "sum= " << sum << std::endl;
	std::cout << "multiple= " << mul << std::endl;
	return 0;
}
