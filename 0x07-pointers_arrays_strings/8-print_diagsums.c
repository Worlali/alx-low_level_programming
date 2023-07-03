#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the matrix array.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i]; /* Elements in the main diagonal */
		sum2 += a[(size - 1) * (i + 1)]; /* Elements in the secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
