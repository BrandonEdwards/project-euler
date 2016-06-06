#include <stdio.h>
#include <inttypes.h>

int main (void)
{
	FILE * fp = fopen("number", "r");
	char input[1000];
	int lower = 0;
	int upper = 12;
	uint64_t product = 0;

	fgets(input, 1001, fp);

	while (upper < 1000)
	{
		uint64_t test = 1;
		for (int i = lower; i <= upper; i++)
		{
			test = test * (input[i] - 48);
		}

		if (test > product) 
		{
			product = test;
		}

		lower++;
		upper++;
	}

	fclose(fp);

	printf("%"PRId64"\n", product);

	return 0;
}