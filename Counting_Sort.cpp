// Alex Wilkinson
// ECE 2161 Lab #5
// Sort algorithm #2 - Counting Sort revised 2.0

#include <iostream>
#include "myheaders.h"
using namespace std;

// Counting Sort implementation
void countingalg(long data[], int n) {
    long lgnum = data[0];
    long smnum = data[0];

    // Find largest and smallest number in array
    for (int i = 1; i < n; i++) {
        if (lgnum < data[i]) lgnum = data[i];
        if (smnum > data[i]) smnum = data[i];
    }


    long range = lgnum - smnum + 1;

    long offset = -smnum;
    // Create counting array
    unsigned long* count = new unsigned long[range]();

    // Count occurrences of each value
    for (int i = 0; i < n; i++) {
        count[data[i] + offset]++;
    }

    // Compute cumulative counts
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    long *tmp = new long[];
    // Build the output array (stable sort)
    for (int i = n - 1; i >= 0; i--) {
        tmp[count[data[i] + offset] - 1] = data[i];
        count[data[i] + offset]--;
    }

    for(int i; i < n; i++){
    	data[i] = tmp[i];
    }

    // Free memory
    delete[] count;
}
