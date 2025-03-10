#include <iostream>
#include <iomanip>

//formatting output

int main(void)
{
	std::cout	<< std::left << std::setw(10) << "Spring" <<  std::setw(10) << "Nice" << std::endl
				<< std::setw(10) << "Summer" << std::setw(10)<< "hot" << std::endl;

	std::cout	<< 1.235 << std::endl;

	std::cout	<< std::fixed << std::setprecision(10) << 12.3456 << std::endl;

	std::cout	<<std::defaultfloat << 11.1156 << std::endl;


	std::cout	<< std::setw(15) << "Course"	<< std::setw(15)	<< "Students"	<< std::endl
				<< std::setw(15) << "C++"		<< std::setw(15)	<<std::right	<< 100 << std::endl << std::left
				<< std::setw(15) << "Javascipt"	<< std::setw(15)	<<std::right	<< 50 << std::endl;

			
	return 0;
}