#include <iostream>
#include <vector>
#include <cstdlib>


int main(void)
{
	int numbers[] = {15, 34 ,55,66,76};
	int size = (int)(sizeof(numbers) / sizeof(int));

	int *ptr = numbers;

	while (*ptr) // assim nao funciona porque está á procura de um 0 dentro da array funciona nas strings porque acabam em '\0'
	{
		std::cout << *ptr << "+ ";
		ptr++;
	}
	std::cout << std::endl;

	

	for(int i = 0; i < size ; i++) // para printar tem que ser assim
	{
		std::cout <<  numbers[i];

		if ((i + 1) < size)
			std::cout << "+ ";
	}
	std::cout << std::endl;
	

	
	//printar ao contrario usando aritmetica de ponteiros
	int *ptr2 = &numbers[size -1];
	int i = 0;

	while ( i  <= size -1)
	{
		std::cout << *ptr2--;

		if ((i + 1) < size)
			std::cout << " : ";
		i++;
	}
	std::cout << std::endl;
	
	ptr2 = &numbers[size -1];

	while(ptr2 >= numbers) //so usando pointers
	{
		std::cout << *ptr2 << " - ";
		ptr2--;
	}
	std::cout << std::endl;
	

	return 0;
}