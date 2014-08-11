#include <iostream>

constexpr auto solve(const int limit)
{
	auto first = 1;
	auto next = 2;
	auto sum = 0;
	while (first <= limit) 
	{
		if (first % 2 == 0) 
			sum += first;
		auto temp = first + next;
		first = next;
		next = temp;
	}
	return sum;
}

auto main() -> int
{
	std::cout << solve(4000000) << std::endl;
	return 0;
}
