#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstNote = "cin is the object used to get input";
	string SecondNote = "cout is the object used to stream to standard out";
	string thirdNote = "cerr is the object used to stream standard error";
	string fourthNote = "clog is the object used for standard logging";

	cout << firstNote <<"\n";
	cout << SecondNote <<"\n";
	cout << thirdNote <<"\n";
	cout << fourthNote <<"\n";
	cin.get();
	return 0;
}
