//Lab 5
//By: Matthew Funchion
//Bubble sort

#include <iostream>
#include <fstream>
#include "myheaders.h"

using namespace std;

void bubble_sort(long data[], int n){
	for(int i = 0; i < n; i++){
		for(int j = n-1; j > i; --j){
			if(data[j] < data[j-1]){
				swap(data[j], data[j-1]);
			}
		}
	}
}



