//Lab 5
//By: Matthew Funchion, Alex Wilkinson, and Ian Murray
//Header file for all functions

#ifndef MYHEADERS_H_
#define MYHEADERS_H_

#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void printmenu();
void printarray(long data[], long size);
int readfile(string infilename, long data[]);
int writefile(long data[], long size, string outfilename);
void swap(long& x, long& y);
void heap(long data[], int n, int i);

//sorting algorithms
void bubble_sort(long data[], int n);
void selection_sort(long data[], int n);
void shellSort(long data[], int n);
void heap_sort(long data[], int n);

#endif /* MYHEADERS_H_ */
