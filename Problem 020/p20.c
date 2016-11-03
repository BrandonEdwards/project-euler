#include <stdio.h>
#include <string.h>

int main (void)
{
    char * string = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000\0";
    int sum = 0;

    for (int i = 0; i < strlen(string) - 1; i++)
    {
        sum += string[i] - '0';
    }

    printf("%d\n", sum);
}