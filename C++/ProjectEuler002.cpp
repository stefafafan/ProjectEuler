#include <iostream>

auto solve(int limit) -> void
{
	auto first = 1;
	auto next = 2;
	auto sum = 0;
	while (first <= limit) {
		if (first % 2 == 0) {
			sum += first;
			std::cout << first << std::endl;
		}
		auto temp = first + next;
		first = next;
		next = temp;
	}
	std::cout << "Final sum: " << sum << std::endl;
}

auto main() -> int
{
	solve(4000000);
	return 0;
}
