#include <stdio.h>

int main (void)
{
	int termOne, termTwo, currentTerm, sum;

	termOne = 1;
	termTwo = 2;
	currentTerm = termOne + termTwo;
	sum = termTwo;

	while (currentTerm < 4000000)
	{

		if (currentTerm % 2 == 0)
		{
			sum = sum + currentTerm;
		}

		termOne = termTwo;
		termTwo = currentTerm;
		currentTerm = termOne + termTwo;
	}

	printf("%d\n", sum);

	return 0;
}