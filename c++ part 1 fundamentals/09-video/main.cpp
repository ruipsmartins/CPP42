
#include<iostream>


/* int	main(int argc, char const *argv[])
{
	int 	file_size = 0;
	int		count = 0;
	double	sales = 9.99;

	std::cout << file_size;
	return 0;
} */

int	main(int argc, char const *argv[])
{
	int a = 1;
	int b = 2;

	int c = a;
	a = b;
	b = c;

	std::cout << a;
	return 0;
}