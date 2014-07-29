#include <iostream>

void solve(int limit)
{
	int sum = 0;
	for (int index = 0; index < limit; ++index)
		if (index % 3 == 0 || index % 5 == 0)
			sum += index;
	std::cout << sum << std::endl;
}

int main()
{
	solve(1000);
	return 0;
}
