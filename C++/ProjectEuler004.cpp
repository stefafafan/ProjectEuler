#include <iostream>
#include <cmath>
#include <sstream>

auto isPalindrome(int num)
{
	std::stringstream out;
	out << num;
	
    auto s = out.str();
	auto length = s.length();
	auto half = floor(length / 2);

	for (auto i = 0; i <= half; ++i)
		if (s.substr(i, 1) != s.substr(length - i - 1, 1)) return false;
	return true;
}

auto largestPalindromeProduct(double digits)
{
    auto current = 0;
	auto limit = pow(10,digits) - 1;

	for (auto i = limit; i > 0; --i)
	{
		for (auto j = limit; j > 0; --j)
			if (isPalindrome(i*j) && i*j > current) current = i*j;
	}
	return current;
}

auto main() -> int
{
	std::cout << largestPalindromeProduct(3) << std::endl;
	return 0;
}
