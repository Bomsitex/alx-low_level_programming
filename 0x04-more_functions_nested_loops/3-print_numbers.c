#include "main.h"
/**
 * print_numbers - Prints the number zero to nine
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
