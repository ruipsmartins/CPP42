#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>


struct Movie
{
	std::string title;
	int year;
};

int string_to_int(std::string str)
{
	std::stringstream ss(str);
	int year;
	ss >> year;
	return year;
}

Movie parse_movie(std::string str)
{
	Movie movie;
	std::stringstream stream(str);
	std::getline(stream, movie.title, ',');
	stream >> movie.year;
	
	return movie;
}

int main(void)
{
	Movie movie = parse_movie("The Dark Knight,2008");

	std::cout << movie.title << " " << movie.year << std::endl;


	return 0;
}

