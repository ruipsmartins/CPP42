#include <iostream>
#include <fstream>
#include <iomanip>



int main(void)
{
	
	std::ofstream file;
	file.open("data.csv");
	if (!file.is_open())
	{
		std::cerr << "Error opening file.\n";
		return 1;
	}
	
	file << std::setw(20) << "Hello" << std::setw(20) << "World!" << std::endl;
	
	file << "id,title,year\n"
		 << "1,The Matrix,1999\n"
		 << "2,The Matrix Reloaded,2003\n"
		 << "3,The Matrix Revolutions,2003\n";
	
	file.close();


}
