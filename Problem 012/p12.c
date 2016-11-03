#include <stdio.h>
#include <math.h>

long triangleNumber (long);
int getNumDivisors (long);

int main (void)
{
    int n = 1;
    long triNum = triangleNumber(n);
    while (getNumDivisors(triNum) < 500)
    {
        n++;
        triNum = triangleNumber(n);
    }

    printf("%u\n", triNum);
}

long triangleNumber (long n)
{
    return (n * (n + 1)) / 2;
}

int getNumDivisors (long n)
{
    int i = 1;
    int numDivisors = 0;
    int limit = (int)sqrt(n);

    while (i <= limit)
    {
        if (n%i == 0)
        {
            numDivisors++;
            if (i != (int)(n / i))
            {
                numDivisors++;
            }
        }

        i++;
    }


    return numDivisors;

    //for (i)
}