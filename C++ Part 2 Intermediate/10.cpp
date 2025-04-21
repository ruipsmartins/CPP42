#include <iostream>
#include <vector>
#include <cstdlib>


int find_index(int *values,int find, int size)
{
	int i = 0;
	while (i < size)
	{
		if (values[i] == find)
		{
			std::cout << "index = " << i << std::endl;
			return i;
		}
		i++;
	}

	return -1;
}


int main(int argc, char **argv)
{
	int values[5] = {10, 20, 30, 40 ,55};
	int ret_value=0;

	if (argc != 2)
		return 1;
	
	int find = std::atoi(argv[1]);

	ret_value = find_index(values, find, (int)(sizeof(values) / sizeof(int)));

	std::cout << "ret_value = " << ret_value << std::endl;

		

	return 0;
}