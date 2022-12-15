#include "main.h"

/**
 * _isupper - checks is the parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if an uppercase character, 0 in other case.
 */
int _isuppercase(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
