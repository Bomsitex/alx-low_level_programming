#include <stdio.h>
/**
*main - print lower alphabet in reversed using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
int i = 122;
while (i > 96)
{
putchar(i);
}
i--;
putchar(10);
return (0);

