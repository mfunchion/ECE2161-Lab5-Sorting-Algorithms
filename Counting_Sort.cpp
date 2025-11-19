// Alex Wilkinson
// ECE 2161 Lab #5
// Sort algorithm #2 - Counting Sort revised 2.0

#include <iostream>
using namespace std;

// Counting Sort implementation
void countingalg(long data[], int n) {
    long i;
    long lgnum = data[0];
    long smnum = data[0];
    long* tmp = new long[n];

    // Find largest and smallest number in array
    for (i = 1; i < n; i++) {
        if (lgnum < data[i]) lgnum = data[i];
        if (smnum > data[i]) smnum = data[i];
    }

    long range = lgnum - smnum + 1;

    // Create counting array
    unsigned long* count = new unsigned long[range];
    for (i = 0; i < range; i++) count[i] = 0;

    // Count occurrences of each value
    for (i = 0; i < n; i++) {
        count[data[i] - smnum]++;
    }

    // Compute cumulative counts
    for (i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array (stable sort)
    for (i = n - 1; i >= 0; i--) {
        tmp[count[data[i] - smnum] - 1] = data[i];
        count[data[i] - smnum]--;
    }

    // Copy sorted values back into original array
    for (i = 0; i < n; i++) {
        data[i] = tmp[i];
    }

    // Free memory
    delete[] tmp;
    delete[] count;
}
