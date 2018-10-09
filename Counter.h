#pragma once


#include <string>
#include <sstream>

using namespace std;

template <typename T>
size_t Spocitaj(string str)
{
	T obj(str);
	return obj.Spocitaj();
}

/*int counter_char(string input)
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
}*/

struct _char : public string
{
	_char(string str) :string(str) {};
	/*int Spocitaj(string str)
	{
		int count = 0;
		istringstream iss(str);
		string line;
		while (getline(iss, line)) count++;
		return str.length() - count;
	};*/
	size_t Spocitaj() 
	{
		int count = 0;
		for (int i = 0; i < length(); i++)
		{
			if (*(begin() + i) == '\n') count++;
		}
		return length() - count; 
	};
};


struct _word : public string
{
	_word(string str) : string(str) {};
	/*static int Spocitaj(string str)
	{
		int i = 0, slova = 0, medzery = 0, znamienko = 0;
		while (i < str.length())
		{
			if (!isalpha(str[i]) && !isspace(str[i]))
			{
				if (znamienko == 0)
				{
					znamienko++;
					str.erase(str.begin() + i);
					continue;
				}
				else if (znamienko > 0)
				{
					str.erase(str.begin() + i);
					if (i != 0) str.insert(i, " ");
				}
			}
			else znamienko = 0;
			if (isspace(str[i]))
			{
				if (i == 0)
				{
					str.erase(str.begin());
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
	};*/
	size_t Spocitaj()
	{
		int i = 0, slova = 0, medzery = 0, znamienko = 0;
		while (i < length())
		{
			if (!isalpha(*(begin()+i)) && !isspace(*(begin()+i)))
			{
				if (znamienko == 0)
				{
					znamienko++;
					erase(begin() + i);
					continue;
				}
				else if (znamienko > 0)
				{
					erase(begin() + i);
					if (i != 0) insert(i, " ");
				}
			}
			else znamienko = 0;
			if (isspace(*(begin()+i)))
			{
				if (i == 0)
				{
					erase(begin());
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
	};
};

struct _line : public string
{
	_line(string str) : string(str) {};
	/*int Spocitaj()
	{
		int count = 0;
		istringstream iss(str);
		string line;
		while (getline(iss, line)) count++;
		return count;
	};	*/
	size_t Spocitaj()
	{
		int count = 0;
		for (int i = 0; i < length(); i++)
		{
			if (*(begin() + i) == '\n') count++;
		}
		return count;
	};
};
