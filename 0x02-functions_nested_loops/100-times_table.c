#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which times table needs to be printed
 */
void print_times_table(int n)
{
    if (n >= 0 && n <= 15)
    {
        int i, j, result;

        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                result = i * j;

                if (j == 0)
                    printf("%d", result);
                else
                    printf(",%*s%d", (result < 100 ? 3 : result < 1000 ? 2 : 1), "", result);
            }
            printf("\n");
        }
    }
}
