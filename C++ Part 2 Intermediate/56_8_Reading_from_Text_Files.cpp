#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>



struct Movie
{
	int id;
	std::string title;
	int year;
};



int main(void)
{
	
	std::ifstream file;
	file.open("data.csv");
	if (!file.is_open())
	{
		std::cerr << "Error opening file.\n";
		return 1;
	}
	
	std::string line;
	std::getline(file, line); // para pular a primeira linha
	while (std::getline(file, line))
	{
		std::stringstream ss(line); // para fazer split
		Movie movie;
		
		std::string idStr, yearStr; // para fazer tipo atoi 
		std::getline(ss, idStr, ','); // para fazer split
		std::stringstream(idStr) >> movie.id; // para fazer tipo atoi 
		
		std::getline(ss, movie.title, ','); // para fazer split
		
		std::getline(ss, yearStr); // para fazer split
		std::stringstream(yearStr) >> movie.year; // para fazer tipo atoi 
		
		std::cout << movie.id << " " << movie.title << " " << movie.year << std::endl; // para imprimir
	}

	file.close();
}

