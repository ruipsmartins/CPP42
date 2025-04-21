#include <iostream>

bool is_valid_number(std::string costumerNumber)
{
	int i = 0;

	if (costumerNumber.length() != 6)
		return false;

	while (costumerNumber[i] != '\0')
	{
		if (i < 2)
		{
			if (!isalpha(costumerNumber[i]))
				return false;
		}
		else if (i >= 2)
		{
			if (!isdigit(costumerNumber[i]))
				return false;
		}
		i++;
	}

	return true;
}


int main(void)
{
	
	std::string costumerNumber;
	while (true)
	{
		std::cout << "Enter a number: ";
		std::cin >> costumerNumber;
		if (costumerNumber == "exit")
			break;
		std::cout << is_valid_number(costumerNumber) << std::endl;
	}
		

	return 0;
}