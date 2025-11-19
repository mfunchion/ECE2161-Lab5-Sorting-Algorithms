//Alex Wilkinson
//ECE 2161 Lab #5
//Sort algorithm #2

//This sorts it using the counting method
//it counts the number of times each number appears
//adds to a new array by smallest to largest
//adds the number of times each number appears in original list

#include <iostream>
#include "myheaders.h"
using namespace std;

//the counting method
void countingalg(long data[], long n){
	long i;
	long lgnum = data[0];
	long* tmp = new long[n];

	//fing largest number in array
	for(i = 1; i < n; i++){
		if(lgnum < data[i]){
			lgnum = data[i];
		}
	}

	//create counting array
	unsigned long * count = new unsigned long[lgnum +1];

	for(i = 0; i <= lgnum; i++){
		count[i] = 0;
	}

	//copy value
	for(i = 0; i < n; i++){
		data[i] = tmp[i];
	}

	delete[]tmp;
	delete[]count;
}




