#include "myheaders.h"
#include <iostream>
using namespace std;

void shellSort(long data[], int n)
{
	long temp, k;
	for(int i=n/2; i>0; i/=2)
	{
		for(int j=i; j<n; j++)
		{
			temp = data[j];

			for(k=j; k >= i&&data[k-i] > temp; k-=i)
			{
				data[k] = data[k-i];
			}

			data[k] = temp;
		}
	}
}
