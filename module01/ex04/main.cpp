/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:56 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/14 22:43:03 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

void	checkLine(std::string &line, std::string s1, std::string s2)
{
	std::size_t ind;
	
	do
	{
		ind = line.find(s1);
		if(ind != std::string::npos)
		{
			line.erase(ind,s1.length());
			line.insert(ind, s2);
		}
	}
	while (ind != std::string::npos);
}

void	read_file(std::string filename, std::string s1, std::string s2)
{
	std::ifstream infile;
	infile.open(filename.c_str(), std::ios::in);
	if (!infile)
	{
		std::cout << "Error: infile: " << strerror(errno) << std::endl;
		std::exit(1);
	}
	filename.append(".replace");
	std::ofstream outfile(filename.c_str());
	if (!outfile)
	{
		std::cout << "Error: outfile: " << strerror(errno) << std::endl;
		std::exit(1);
	}
	std::string line;
	while (getline(infile, line))
	{
		checkLine(line, s1, s2);
		outfile << line << std::endl;
	}
	outfile.close();
	infile.close();
}

bool	validFilename(std::string filename)
{
	bool	onlySpaces = true;
	
	for (int i = 0; filename[i]; i++)
	{
		if (!isprint(filename[i]))
			return (false);
		if (!isspace(filename[i]))
			onlySpaces = false;
	}
	if (!onlySpaces)
		return (true);
	return (false);
}

void	checkArgs(char **argv, std::string &filename, std::string &s1, std::string &s2)
{
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (filename.empty())
	{
		std::cout << "filename cannot be empty" << std::endl;
		std::exit(1);
	}
	if (!validFilename(filename))
	{
		std::cout << "filename is not a valid filename" << std::endl;
		std::exit(1);
	}
	if (s1.empty())
	{
		std::cout << "s1 cannot be empty" << std::endl;
		std::exit(1);
	}
}

int	main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cout << "Program requires 3 arguments" << std::endl;
		return (1);
	}
	checkArgs(argv, filename, s1, s2);
	read_file(filename, s1, s2);
	return (0);
}
