#include <iostream>


typedef struct s_movie
{
	std::string title;
	std::string director;
	int year;
	bool is_popular;

	// Method its a function that belongs to a struct
	// It can access the struct's members
	// operator== is a member function that compares two movies
	// const means that the function will not modify the struct's members
	bool operator==(const s_movie &other) const
	{
		return this->title == other.title &&
		this->director == other.director &&
		this->year == other.year &&
		this->is_popular == other.is_popular;
	}
} t_movie;

// operator<< is a global function that prints a movie
// ostream is the output stream
// stream is the output stream
// movie is the movie to print
std::ostream &operator<<(std::ostream &stream, const s_movie &movie)
{
	stream << movie.title << " (" << movie.year << ")";
	return stream;
}

typedef struct s_point
{
	int x;
	int y;
} t_point;

// operator== is a global function that compares two points
// point1 is the first point
// point2 is the second point
bool operator==(const t_point &point1, const t_point &point2)
{
	return point1.x == point2.x && point1.y == point2.y;
}
// operator<< is a global function that prints a point
// ostream is the output stream
// stream is the output stream
// point is the point to print
std::ostream &operator<<(std::ostream &stream, const t_point &point)
{
	return stream << "(" << point.x << ", " << point.y << ")";
}

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

	std::cout << movie1 << std::endl;

	t_point point1 = {10, 20};
	t_point point2 = {10, 21};

	std::cout << "point1 == point2: " << (point1 == point2) << std::endl;
	std::cout << point1 << std::endl;

	return 0;
}