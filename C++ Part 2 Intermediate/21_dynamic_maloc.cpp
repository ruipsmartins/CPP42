#include <iostream>
#include <vector>
#include <cstdlib>

int main(void)
{
	int size_arr = 5;
	int *numbers = new int[size_arr];
	int entries = 0;

	while (true)
	{
		std::cout << "Number: ";
		std::cin >> numbers[entries];
		if (std::cin.fail())
			break;
		entries++;
		if (entries == size_arr)
		{
			size_arr *= 2;
			int *temp = new int[size_arr];
			for (int i = 0; i < entries; i++)
			{
				temp[i] = numbers[i];
			}
			delete[] numbers;
			numbers = temp;
		}
	}

	std::cout << "Lista de números introduzidos:" << std::endl;

	for (int i = 0; i < entries; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	delete[] numbers;

	return 0;
}