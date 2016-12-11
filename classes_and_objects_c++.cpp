#include <iostream>
using namespace std;

//This is how you create a class in c++
class SleepsClass{
	public:
		void coolSaying(){
			cout << "You know what it is" << endl;
		}
};

int main()
{
	//this is turnng my class into and object; now I have access to the things in my class
	SleepsClass sleepsObject;

	sleepsObject.coolSaying();

	return 0;

}
