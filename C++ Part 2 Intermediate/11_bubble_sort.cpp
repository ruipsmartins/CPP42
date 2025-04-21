#include <iostream>
#include <vector>
#include <cstdlib>

void bubble_sort(int values[], int size)
{
	int temp;

	for (int l = 0; l < size - 1; l++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (values[i] > values[i + 1])
			{
				temp = values[i];
				values[i] = values[i + 1];
				values[i + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int values[5] = {8, 5, 1, 3, 4};

	bubble_sort(values, (int)(sizeof(values) / sizeof(int)));

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << values[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}