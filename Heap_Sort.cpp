//Lab 5
//By: Matthew Funchion
//Bubble sort

#include <iostream>
#include "myheaders.h"

using namespace std;

void heap_sort(long data[], int n){
	for(int i = n/2 - 1; i >=0; i--){
		heap(data,n,i);
	}
	for(int i = n-1; i >= 1; i--){
		swap(data[0], data[i]);
		heap(data, i, 0);
	}
}




