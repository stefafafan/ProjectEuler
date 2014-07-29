#include <iostream>

void solve(int limit)
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

int main()
{
	solve(4000000);
	return 0;
}
