#include <iostream>
#include <vector>
#include <cstdlib>


void print_matrix(int matrix[2][3])
{

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t l = 0; l < 3; l++)
		{
			std::cout << matrix[i][l] << " ";
		}
		std::cout << std::endl;
	}
}

int main(void)
{
	int matrix[2][3] = {
		{1, 3 , 5},
		{3, 4 , 8}
	};

	print_matrix(matrix);

	return 0;
}