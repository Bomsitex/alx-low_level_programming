#include <stdio.h>

/**
*main - programe that prints either number
*or fizz or buzz or fizzbuzz
*Return: returns 0
*/

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FIZZYBUZZ ");
		}
		else if ((num % 3) == 0)
		{
			printf("FIZZ ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("BUZZ ");
			}
			else
			{
				printf("BUZZ");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
