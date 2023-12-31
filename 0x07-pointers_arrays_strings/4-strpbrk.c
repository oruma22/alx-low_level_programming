#include "main.h"
/**
 * _strpbrk - searhes a string for any set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be looked for
 * Return: if a set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
