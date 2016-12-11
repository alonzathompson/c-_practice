/*this is apart of my separate class files. It takes two files tto
  make a separate class a header file and a cpp file(which is this).
  this cpp file is called a source file. This is where we are actually going to 
  be building the functions  
*/

#include "ClassC.h"
#include <iostream>

using namespace std;

	//the :: is called the binary scope resolution operator
	//this is basically saying the ClassC function is apart of the 
	//ClassC class
	ClassC::ClassC()
	{
		cout << "I am Like that" << endl;
	}
