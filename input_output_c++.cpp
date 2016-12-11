#include <iostream>

using namespace std;

int main()
{
	int a,b,sum;

	cout << "Enter your number! \n";
	cin >> a;

	cout << "Enter another number! \n";
	cin >> b;

	sum = a + b;
	cout << "The sum of those numbers is " << sum << endl;

	cin.get();
	return 0;

}
