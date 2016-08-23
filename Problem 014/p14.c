#include <stdio.h>

int collatz (long long, int);

int main (void)
{
    int chainLength = 0;

    for (int i = 1; i < 1000000; i++)
    {
        int testLength = collatz(i, 1);
        if (testLength > chainLength)
        {
            chainLength = testLength;
            printf("%d\n", i);
        }

    }

    //printf("%d\n", chainLength);
}

int collatz (long long n, int length)
{
    if (n == 1)
    {
        return length;
    }
    else if ((n % 2) == 0)
    {
        length = collatz((long long)(n / 2), length + 1);
    }
    else
    {
        length = collatz((3*n) + 1, length + 1);
    }

    return length;
}