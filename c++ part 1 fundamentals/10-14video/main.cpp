
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
	double sales = 95000;
	double state_tax = sales * 0.04;
	double county_tax = sales * 0.02;
	double total_tax =  state_tax + county_tax;


	std::cout	<< "sales = " << sales << std::endl
				<< "state tax = " << state_tax << std::endl
				<< "county tax = " << county_tax << std::endl
				<< "total tax = " << total_tax << std::endl;

	return 0;
}