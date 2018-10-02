#pragma once


#include <string>
#include <sstream>

using namespace std;

int counter_char(string input)
{
	int count = 0;
	istringstream iss(input);
	string line;
	while (getline(iss, line)) count++;
	return input.length() - count;
}

int counter_word(string input)
{
	int i = 0, slova = 0, medzery = 0, znamienko = 0;
	while (i < input.length())
	{
		if (!isalpha(input[i]) && !isspace(input[i]))
		{
			if (znamienko == 0)
			{
				znamienko++;
				input.erase(input.begin() + i);
				continue;
			}
			else if (znamienko > 0)
			{
				input.erase(input.begin() + i);
				if (i != 0) input.insert(i, " ");
			}
		}
		else znamienko = 0;
		if (isspace(input[i]))
		{
			if (i == 0)
			{
				input.erase(input.begin());
				continue;
			}
			if (medzery == 0)
			{
				medzery++;
				slova++;
			}
		}
		else medzery = 0;
		i++;
	}
	return slova;
}

int counter_line(string input)
{
	int count = 0;
	istringstream iss(input);
	string line;
	while (getline(iss, line)) count++;
	return count;
}