#include <iostream>
using namespace std;

//define is used to define constants that will never chage that we can use

#define PI 3.14159
#define NEWLINE '\n'

int main()
{
	double r=5.0;
	double circle;
	
	circle = 2 * PI * r;
	cout << circle;

	cin.get();
	return 0;
}
