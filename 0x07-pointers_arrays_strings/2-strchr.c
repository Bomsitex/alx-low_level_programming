#include "main.h"
#include <string.h>
/**
* __strchr - locates a character in a string
* @s: string
* @c: character to search
* Return: pointer to the first occurance of the character c in the string s
*/
char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
