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
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
