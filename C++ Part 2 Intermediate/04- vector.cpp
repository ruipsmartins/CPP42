#include <iostream>
#include <vector>

void print_numbers(const std::vector<int>& numbers)
{
	// Evitar comparação signed vs unsigned
	for (std::size_t i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}

int main()
{
	// Não podes usar {10, 20, ...} em C++98, tens de construir assim:
	int tmp1[] = {10, 20, 30, 40, 50};
	std::vector<int> numbers1(tmp1, tmp1 + sizeof(tmp1)/sizeof(int));

	int tmp2[] = {1, 2, 3, 4, 5, 6, 7, 8};
	std::vector<int> numbers2(tmp2, tmp2 + sizeof(tmp2)/sizeof(int));

	print_numbers(numbers1);
	print_numbers(numbers2);

	return 0;
}