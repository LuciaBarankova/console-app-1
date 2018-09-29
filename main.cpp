// app.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	if (argc == 1) return 0;
	else if (argc == 2)
	{
		string input;
		string iinput;
		int num = 0;
		while (getline(cin, iinput))
		{
			input.append(iinput + "\n");
			num++;
		}
		if (string(argv[1]) == "-c")
		{
			int length = input.length() - num;
			if (length == 1)
			{
				cout << "Zadany vstup obsahuje 1 znak." << endl;
				return 0;
			}
			else if (length == 2 || length == 3 || length == 4)
			{
				cout << "Zadany vstup obsahuje " << length << " znaky." << endl;
				return 0;
			}
			else
			{
				cout << "Zadany vstup obsahuje " << length << " znakov." << endl;
				return 0;
			}
		}
		else if (string(argv[1]) == "-w")
		{
			int i = 0, length;
			while (i < input.length())
			{
				if (!isalpha(input[i]) && !isspace(input[i]))
					input.erase(input.begin() + i);
				i++;
			}
			length = input.length();
			if (length == 1)
			{
				cout << "Zadany vstup obsahuje 1 slovo." << endl;
				return 0;
			}
			else if (length == 2 || length == 3 || length == 4)
			{
				cout << "Zadany vstup obsahuje " << length << " slova." << endl;
				return 0;
			}
			else
			{
				cout << "Zadany vstup obsahuje " << length << " slov." << endl;
				return 0;
			}
		}
		else if (string(argv[1]) == "-l")
		{
			if (num == 1)
			{
				cout << "Zadany vstup obsahuje 1 riadok." << endl;
				return 0;
			}
			else if (num == 2 || num == 3 || num == 4)
			{
				cout << "Zadany vstup obsahuje " << num << " riadky." << endl;
				return 0;
			}
			else
			{
				cout << "Zadany vstup obsahuje " << num << " riadkov." << endl;
				return 0;
			}
		}
	}



	return 0;
}
