#include "pch.h"
#include <iostream>

unsigned long NOK(unsigned long long x, long y) {
	long long a = x;
	long b = y;
	long res;
		while (x != y) {
			if (x > y) {
				x = x - y;
			}
			else {
				y = y - x;
			}
		}
	res = (a*b) / x;
	return res;
}

unsigned long findValue(unsigned int min, unsigned max)
{
	int k;
	long res;
	k = min + 2;
	res = NOK(min, min++);
	for (int g = k; g <= max; g++) {
		res = NOK(res,g);
	}
	return res;
}