#include <iostream>

template <typename T>
T gcd(T a, T b)
{
	return b ? gcd(b, a % b) : a;
}

template <typename T>
T lcm(T a, T b)
{
	return (a / gcd(a, b)) * b;
}

auto main() -> int
{
	auto value = lcm(20, 20 - 1);

	for (auto x = 20 - 2; x >= 1; --x)
		value = lcm(x, value);

	std::cout << value << std::endl;
	return 0;
}
