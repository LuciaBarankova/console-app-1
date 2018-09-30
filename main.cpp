// app.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char **argv)
{
	if (argc != 2 && argc != 3) return 0;
	else if (argc == 2 || argc == 3)
	{
		string input;
		string iinput;
		int num = 0;
		if (argc == 2)
		{
			while (getline(cin, iinput))
			{
				input.append(iinput + "\n");
				num++;
			}
		}
		else
		{
			fstream file;
			cout << string(argv[2]) << endl;
			file.open(string(argv[2]));
			if (! file)
			{
				cout << "Nepodarilo sa otvorit subor." << endl;
				return 0;
			}
			while (getline(file, iinput))
			{
				input.append(iinput + "\n");
				num++;
			}
			file.close();
		}
		if (string(argv[1]) == "-c")
		{
			int length = input.length() - num;
			if (length == 0) cout << "Zadany vstup neobsahuje ziadne znaky" << endl;
			else if (length == 1)
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
			if (slova == 0)	cout << "Zadany vstup neobsahuje ziadne slovo" << endl;
			else if (slova == 1)
			{
				cout << "Zadany vstup obsahuje 1 slovo." << endl;
				return 0;
			}
			else if (slova == 2 || slova == 3 || slova == 4)
			{
				cout << "Zadany vstup obsahuje " << slova << " slova." << endl;
				return 0;
			}
			else
			{
				cout << "Zadany vstup obsahuje " << slova << " slov." << endl;
				return 0;
			}
		}
		else if (string(argv[1]) == "-l")
		{
			if (num == 0) cout << "Zadany vstup neobsahuje ziaden riadok" << endl;
			else if (num == 1)
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
