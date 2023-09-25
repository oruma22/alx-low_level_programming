#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: number of time to be copied
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
