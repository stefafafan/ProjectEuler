#include <iostream>

auto squareSumDiff(int num)
{
	auto total = 0;
	auto sum = 0;
	auto squaresum = 0;

	for (auto x = 1; x <= num; ++x)
	{
		total += x;
		sum += (x * x);
	}

	squaresum = total * total;
	return squaresum - sum;
}

auto main() -> int
{
	std::cout << squareSumDiff(100) << std::endl;
	return 0;
}