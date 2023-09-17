#include "main.h"
/**
 * _abs - checks for teh absolute value
 * @a: parameter to be checked
 * Return: a or -a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
