#include <iostream>

auto solve(int limit)
{
	auto sum = 0;
	for (auto index = 0; index < limit; ++index)
		if (index % 3 == 0 || index % 5 == 0)
			sum += index;
	std::cout << sum << std::endl;
}

auto main() -> int
{
	solve(1000);
	return 0;
}
