#include <stdio.h>

int main (void)
{
	int counter = 1;
	int testNum = 2;

	while (counter < 10001)
	{
		testNum++;

		for (int i = 2; i <= testNum; i++)
		{
			if ((testNum % i == 0) && (i != testNum))
			{
				break;
			}
			else if ((testNum % i == 0) && (i == testNum))
			{
				counter++;
				break;
			}
		}
	}

	printf("%d\n", testNum);

	return 0;
}
