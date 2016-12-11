#include <iostream>
#include <string>
using namespace std;


//Declaring a class
class SleepsClass{
	private:
		string name;
	//publilic is also called and access modifier
	public:
		//setter functions to change the private name variable
		//when ever we are setting something we use the naming convention set
		void setName(string x){
			name = x;
		}

		//When ever we are getting data we use the naming convention get		
		string getName(){
			return name;
		}
};

int main()
{
	//the so is my object that represents SleepsClass 
	SleepsClass sO;
	sO.setName("Sir Sleep");

	cout << sO.getName() << endl;

	cin.get();
	return 0;
}
