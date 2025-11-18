//Lab 5
//By: Ian Murray
//Selection Sort

#include "myheaders.h"
#include <iostream>
using namespace std;

void selection_sort(long data[], int n){
	for(int i = 0; i < n - 1; i++){
		int least = i;
		for(int j = i + 1; j < n; j++){
			if(data[j] < data[least]){
				least = j;
			}
		}
		swap(data[i], data[least]);
	}
}


