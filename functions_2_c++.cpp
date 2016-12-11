#include <iostream>
using namespace std;

int addNumbers(int x, int y);

int main(){

	cout << addNumbers(43, 86) <<"\n";

	cin.get();
	return 0;
}

int addNumbers(int x, int y)
{
	int answer = x + y;
	return answer;
}
