/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:56:47 by asajid            #+#    #+#             */
/*   Updated: 2023/12/25 14:43:01 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>//ifstream
#include <cstdlib> // for exit()

int main(int ac, char **av)
{

	if (ac != 4)
	{
		std::cerr << "Wrong format " << std::endl;
		exit (EXIT_FAILURE);
	}
	std::string filename = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];
	std::string newfilename;
	std::string line;
	char ch;

	if (str1 == str2)
		std::cerr << "Wrong input , str1 and str2 cannot be same" << std::endl;

	std::ifstream file(filename);  // Create an input file stream and open the file and reads te input fr the file
	if (!file.is_open())
	{
		std::cerr << "Invalid filename!!" << std::endl;
		file.close();
		exit (EXIT_FAILURE);
	}
	else
		newfilename = filename + ".replace";
	while (file.get(ch))
		line.push_back(ch);
	file.close();

	std::ofstream newfile(newfilename);
	if (newfile.is_open())
	{
		std::string latest;

		size_t start = 0;
		size_t index = line.find(str1);
		while (index != std::string::npos) // until none are left to find.
		{
			latest += line.substr(start, index - start);
			latest += str2;
			start = index + str1.length();
			index = line.find(str1, start);
		}
		latest += line.substr(start);
		newfile << latest;
		newfile.close();
	}
	else
	{
		std::cerr << "Failed to create output file" << std::endl;
		exit(EXIT_FAILURE);
	}

	return 0;
}
