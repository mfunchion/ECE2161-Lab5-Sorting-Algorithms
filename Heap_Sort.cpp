//Lab 5
//By: Matthew Funchion
//Bubble sort

#include <iostream>
#include "myheaders.h"

using namespace std;

void heap(long data[], int n, int i){
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if(left < n && data[left] > data[largest]){
		largest = left;
	}

	if(right < n && data[right] > data[largest]){
		largest = right;
	}

	if(largest != i){
		swap(data[i], data[largest]);
		heap(data, n, largest);
	}
}

void heap_sort(long data[], int n){
	for(int i = n/2 - 1; i >=0; i--){
		heap(data,n,i);
	}
	for(int i = n-1; i >= 1; i--){
		swap(data[0], data[i]);
		heap(data, i, 0);
	}
}




