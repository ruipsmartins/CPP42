
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
	double x,y,z;

	x = 11;
	y = 5;
	z = (x + 10)/(y*3);

	std::cout	<< "z = " << z << std::endl;
				<< "x = " << x << std::endl;

	return 0;
}