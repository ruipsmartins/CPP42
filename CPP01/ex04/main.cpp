/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:26:13 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/06 12:27:42 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replaceInFile(std::ifstream &inFile, std::ofstream &outFile, const std::string s1, const std::string s2)
{
	std::string line;

	while(std::getline(inFile, line))
	{
		size_t pos = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
}


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if (s1.empty() || s2.empty())
	{
		std::cerr << "s1 or s2 cant be empty" << std::endl;
		return 1;
	}
	
	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: could not open input file" << std::endl;
		return (1);
	}

	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: could not open output file" << std::endl;
		inFile.close();
		return (1);
	}
	
	
	replaceInFile(inFile, outFile,s1, s2);


	inFile.close();
	outFile.close();

	return (0);
}