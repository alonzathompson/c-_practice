#include <iostream>

using namespace std;


int main(int arr, int target) {
	int min = 0;
	int max = arr.length -1;
	int guess;
	int numGuess = 0;
	
	while(min - max){
		guess = floor((min + max) /2);
		
		cout<< numGuesses
		
		if(arr[guess] === target){
			cout<< guess;
			return guess;
		} else if (arr[guess] === min){
			guess = min + 1;		
		} else {
			guess = max-1;
		}
		
		cout << guess;
	}
	
	return -1; 
}
