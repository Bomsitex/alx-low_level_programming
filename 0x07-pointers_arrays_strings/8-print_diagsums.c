#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints sum of two diagonals of a square
* @a: pointer to an array
* @size: size of array
*/
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1)
	{
		sumDiag1 = sumDiag1 + a[i];
	}
	for (i = (size - 1); i < size1


