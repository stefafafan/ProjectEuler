#include <iostream>
#include <cmath>

// http://d.hatena.ne.jp/scior/20110410/1302442891
constexpr auto cexprfmod(const double a, const double b)
{
	return a - static_cast<int> (a / b) * b;
}

// TODO: constexpr sqrt.

auto isPrime(double x)
{
	if ((cexprfmod(x, 2) == 0 && x != 2) || (x < 2)) return false;

	for (auto i = 3; i <= sqrt(x); i += 2)
		if (cexprfmod(x, i) == 0) return false;

	return true;
}

auto getLargestPrimeFactor(double num)
{
	auto current = 0;

	for (auto i = 2; i <= sqrt(num); i++)
	{
		if (isPrime(i))
			if (cexprfmod(num, i) == 0) current = i;
	}
	
	return current;
}

auto main() -> int
{
	std::cout << getLargestPrimeFactor(600851475143) << std::endl;
	return 0;
}
