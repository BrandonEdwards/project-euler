#include <stdio.h>

//600851475143

//Kind of works. The second line that is output is the answer

int getLargestPrime (long);

int main (void)
{
	long number = 600851475143;
	int largestPrime;

	largestPrime = getLargestPrime(number);

	printf("%d\n", largestPrime);

	return 0;
}

int getLargestPrime (long number)
{
	long divisor = 2;
	while (divisor < number)
	{
		if (number % divisor == 0)
		{
			getLargestPrime (number / divisor);
			break;
		}
		divisor++;
	}
printf("returning %d\n", (int)(number/divisor));
	return (number / divisor);
}