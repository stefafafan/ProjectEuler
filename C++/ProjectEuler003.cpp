#include <iostream>
#include <cmath>

// http://d.hatena.ne.jp/scior/20110410/1302442891
constexpr auto cexprfmod(const double a, const double b)
{
	return a - static_cast<int> (a / b) * b;
}

// http://forums.techarena.in/software-development/1290144.htm
constexpr auto cexprsqrt(const double a)
{
	auto n = a / 2.0;
	auto lstX = 0.0;
	while (n != lstX)
	{
		lstX = n;
		n = (n + a / n) / 2.0;
	}
	return n;
}

constexpr auto isPrime(const double x)
{
	if ((cexprfmod(x, 2) == 0 && x != 2) || (x < 2)) return false;

	for (auto i = 3; i <= cexprsqrt(x); i += 2)
		if (cexprfmod(x, i) == 0) return false;

	return true;
}

constexpr auto getLargestPrimeFactor(const double num)
{
	auto current = 0;

	for (auto i = 2; i <= cexprsqrt(num); i++)
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
