#include "main.h"
/**
* main - print alphabet in lowercase 10 times
* Return - 0
*/
void print_alphabet(void)
{
char alpha;
char alpha2;
for (alpha = 0; alpha <= 9; alpha++)
{
for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
{
_putchar(alpha2);
}
_putchar('\n');
}
}
