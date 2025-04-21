#include <iostream>


typedef struct s_movie
{
	std::string title;
	std::string director;
	int year;
	bool is_popular;

	// Method its a function that belongs to a struct
	// It can access the struct's members
	bool operator==(const s_movie &other) const
	{
		return this->title == other.title &&
		this->director == other.director &&
		this->year == other.year &&
		this->is_popular == other.is_popular;
	}
} t_movie;




int main(void)
{
	t_movie movie1;
	t_movie movie2;
	t_movie movie3;

	movie1.title = "The Dark Knight";
	movie1.director = "Christopher Nolan";
	movie1.year = 2008;
	movie1.is_popular = true;

	movie2.title = "The Shawshank Redemption";
	movie2.director = "Frank Darabont";
	movie2.year = 1994;
	movie2.is_popular = true;

	movie3.title = "The Dark Knight";
	movie3.director = "Christopher Nolan";
	movie3.year = 2008;
	movie3.is_popular = true;

	std::cout << (movie1 == movie2) << std::endl;
	std::cout << (movie1 == movie3) << std::endl;


	return 0;
}