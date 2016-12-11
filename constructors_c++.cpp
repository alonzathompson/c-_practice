#include <iostream>
#include <string>
using namespace std;

class SleepsClass{
	private:
		string name;
	public:
		//Constructor
		//Constructor name is always the same as class name thats how you make constructor
		//constructor is mainly used to give variables and initial value
		SleepsClass(string settingName){
			///we are still keeping variables private and calling the set Name
			//function to set variable to initial value
			setName(settingName);
		}

		//sets name
		void setName(string x){
			name = x;
		}
		string getName(){
			return name;
		}
};

int main(){
	
	//as soon as you create the object the constructor function will get called
	//the constructor function is passed to the object and becomes the object function
	//It then can take parameters
	//setting name is the parameter and allows us to pass a name through our 
	//objects constructor function
	SleepsClass sO("BigSleep Sir");
	cout << sO.getName() <<"\n";
	
	//Here we have made another object from the same class
	//Eventhou there from the same class they are 2 different objects with there own values
	//We are basically creating instances of the SleepClass 
	SleepsClass sO2("Killa Killa");
	cout << sO2.getName() <<"\n";

	cin.get();
	return 0;
}
