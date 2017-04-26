#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ** readfile ();
double getLargestProduct (int **);

int main (void)
{
    int ** grid = readfile();
    printf("%lf\n", getLargestProduct(grid));

    for (int i = 0; i < 20; i++)
    {
        free(grid[i]);
    }

    free(grid);

    return 0;
}

int ** readfile ()
{
    int ** grid = malloc(sizeof(int *) * 20);
    if (grid == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < 20; i++)
    {
        grid[i] = malloc(sizeof(int) * 20);
        if (grid[i] == NULL)
        {
            return NULL;
        }
    }

    FILE * fp = fopen("grid", "r");
    if (fp == NULL)
    {
        free(grid);
        return NULL;
    }

    char input[1000];
    int i = 0;
    while (fgets(input, 999, fp) != NULL)
    {
        int j = 0;
        char * token = strtok(input, " ");
        while (token != NULL)
        {
            grid[i][j] = atoi(token);
            j++;
            token = strtok(NULL, " ");
        }
        i++;
    }

    fclose(fp);

    return grid;
}

double getLargestProduct (int ** grid)
{
    double largest = 0;

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            int subset[4][4];
            //Populate our subset matrix
            for (int p = 0; p < 4; p++)
            {
                for (int q = 0; q < 4; q++)
                {
                    subset[p][q] = grid[p+i][q+j];
                }
            }

            double diagProduct1 = 1;
            double diagProduct2 = 1;
            for (int p = 0; p < 4; p++)
            {
                diagProduct1 = diagProduct1 * subset[p][p];
                diagProduct2 = diagProduct2 * subset[p][3-p];

                double rowProduct = 1;
                double colProduct = 1;

                for (int q = 0; q < 4; q++)
                {
                    rowProduct = rowProduct * subset[p][q];
                    colProduct = colProduct * subset[q][p];
                }

                if (rowProduct > largest)
                {
                    largest = rowProduct;
                }
                if (colProduct > largest)
                {
                    largest = colProduct;
                }
            }

            if (diagProduct1 > largest)
            {
                largest = diagProduct1;
            }
            if (diagProduct2 > largest)
            {
                largest = diagProduct2;
            }
        }
    }

    return largest;
}