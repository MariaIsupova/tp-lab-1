#include "task5.h" 
#include <iostream> 

using namespace std;

void split(char ***result, int *N, const char *buf, char ch)
{
	int count = 0;
	int	k = 0;
	for (int i = 0; buf[i] != '\0'; i++)
	{
		k = i;
		if (ch == buf[i]) ++count;
	}
	char *str = new char[k + 1];
	*result = new char*[count];
	(*result)[0] = str;
	k = 0;
	count = 1;
	while (buf[k] != '\0')
	{
		str[k] = buf[k];
		if (buf[k] == ch)
		{
			(*result)[count] = str + (k + 1);
			str[k] = '\0';
			++count;
		}
		++k;
	}
	*N = count;
	str[k] = '\0';
}