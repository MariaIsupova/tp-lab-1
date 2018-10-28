#include <iostream>
#include "task2.h"
bool checkPrime(unsigned value) {

	if (value < 2) return false;
	if (value == 2) return true;
	if (value % 2 == 0) return false;
 	
 	for (long long k = 3; k <= sqrt(value); k += 2) {
		if ((value % k) == 0) return false;
	}
	return true;
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