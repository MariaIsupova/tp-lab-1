#include <iostream>
#include "task2.h"
bool checkPrime(unsigned int value) 
{
	unsigned int k;
	int count = 0;
	for (k = 1; k <= value; k++) 
	{
		if (value%k == 0) 
		{
			count++;
		}
	}
	if (count == 2) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
unsigned long long nPrime(unsigned n)
{
	unsigned int value = 1;
	int countPrime = 0;
	while (n != countPrime) 
	{
		value++;
		if (checkPrime(value) == 1)
		{
			countPrime++;
		}
	}
	return value;
}
unsigned long long nextPrime(unsigned long long value) 
{
	int countPrime = 0;
	while (1 != countPrime) 
	{
		value++;
		if (checkPrime(value) == 1) 
		{
			countPrime++;
		}

	}
	return value;

}