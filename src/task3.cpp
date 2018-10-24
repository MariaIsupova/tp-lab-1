#include <iostream>
#include "task2.cpp"

unsigned long long sumPrime(unsigned int hbound) 
{
	int i;
	unsigned long long sum = 0;
	for (i = 2; i < hbound; i++)
	{
		if (checkPrime(i) == 1)
		{
			sum = sum + i;
		}
	}
	return sum;
}