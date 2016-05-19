#include <stdio.h>

//a + b + c = 1000 for a^2 + b^2 = c^2
//Solve for c = 1000 - a - b to make two loops solving for a and b

int main (void)
{
	int sum = 1000;

	for (int a = 1; a < sum; a++)
	{
		for (int b = a + 1; b < sum; b++) //b always > a, therefore for b = a + 1
		{
			int c = 1000 - a - b;
			if ((a*a + b*b) == (c*c))
			{
				printf("%d\n", a*b*c);
			}
		}
	}

	return 0;
}
