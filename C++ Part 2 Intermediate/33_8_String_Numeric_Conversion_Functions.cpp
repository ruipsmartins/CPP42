#include <iostream>
#include <cstdlib>
#include <string>


int main(void)
{
	
	std::string number;
	std::string path;

	path = "\"C:/Users/user/Desktop/test.txt\"";

	std::cout << path << std::endl;

	while (true)
	{
		std::cout << "Enter a number: ";
		std::cin >> number;
		if (number == "exit")
			break;
		int num = atoi(number.c_str());
		std::cout << num * 2 << std::endl;
	}
		

	return 0;
}