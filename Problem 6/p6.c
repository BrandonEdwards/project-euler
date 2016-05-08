#include <stdio.h>

int sumOfSquares (int);
int squareOfSum (int);

int main (void)
{
	printf("%d\n", squareOfSum(100) - sumOfSquares(100));

	return 0;
}

int sumOfSquares (int n)
{
	return (n*(n + 1)*(2*n + 1))/6;
}

int squareOfSum (int n)
{
	return ((n*(n+1))/2) * ((n*(n+1))/2);
}