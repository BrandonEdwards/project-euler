#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkPal (int);

int main (void)
{
	int currentHighest = 0;
	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			if (checkPal(i * j) == 1)
			{
				if ((i * j) > currentHighest)
				{
					currentHighest = i * j;
				}
			}
		}
	}

	printf("%d\n", currentHighest);
	return 0;
}

int checkPal (int test)
{
	
	char num[10];

	sprintf(num, "%d", test);

	int size = strlen(num);

	for (int i = 0; i < size; i++)
	{
		if (num[i] != num[size - i - 1])
		{
			return 0; //not a palindrome
		}
	}
	return 1; //palindrome
}