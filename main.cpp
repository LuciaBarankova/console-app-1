// app.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	//cout << argc << endl;
	//cout << string(argv[0]) << endl;
	//cout << string(argv[1]) << endl;
	//cout << "Hello World!" << endl;

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
			cout << length << endl;
		}
		else if (string(argv[1]) == "-l")
		{
			cout << num << endl;
		}
	}



	return 0;
}
