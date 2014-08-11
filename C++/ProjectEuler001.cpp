#include <iostream>

constexpr auto solve(const int limit)
{
	auto sum = 0;
	for (auto index = 0; index < limit; ++index)
		if (index % 3 == 0 || index % 5 == 0)
			sum += index;
	return sum;
}

auto main() -> int
{
	std::cout << solve(1000) << std::endl;
	return 0;
}
