#include <stdio.h>

int main (void)
{
	int testNum = 2520;
	int tf = 1;

	while (tf == 1)
	{
		testNum++;
		for (int i = 2; i <= 20; i++)
		{
			if ((testNum % i) != 0)
				break;
			else if (i == 20)
				tf = 0;
		}
	}

	printf("%d\n", testNum);

	return 0;
}