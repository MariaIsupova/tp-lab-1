#include "task4.h"
#include <iostream>
#include "task4.h"

using namespace std;

char * sum(char *x, char *y) {
	int length;
	int n;
	int len_x = strlen(x) - 1;
	int len_y = strlen(y) - 1;

	if (strlen(x) > strlen(y)) { 
		length = strlen(x);
	}
	else {
		length = strlen(y);
	}
	char *sum = new char[length];

	for (int i = 0; i <= length; i++) {
		sum[i] = '0';
	}

	for (int i = length; i > 0; i--) {
		if ((len_x >= 0) && (len_y >= 0)) {
			n = sum[i] - '0' + x[len_x] - '0' + y[len_y] - '0';
			if (n / 10 == 1) sum[i - 1] = '1';
			sum[i] = n % 10 + '0';
		}
		else {
			if (len_x >= len_y) { 
				n = sum[i] - '0' + x[len_x] - '0'; 
			}
			if (len_x < len_y) { 
				n = sum[i] - '0' + y[len_y] - '0'; 
			}
			if (n / 10 == 1) { 
				sum[i - 1] = '1'; 
			}
			sum[i] = n % 10 + '0';
		}
		len_x--;
		len_y--;
	}

	if (sum[0] == '0') {
		for (int i = 0; i < strlen(sum); i++) {
			sum[i] = sum[i + 1];
		}
		sum[length] = NULL;
	}
	else { 
		sum[length + 1] = NULL; 
	}

	return sum;
}