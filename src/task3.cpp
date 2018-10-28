#include <iostream>
#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound) 
{
	int i;
	long long sum = 0;
	for (i = 2; i < hbound; i++)
	{
		if (checkPrime(i) == 1)
		{
			sum = sum + i;
		}
	}
	return sum;
}
