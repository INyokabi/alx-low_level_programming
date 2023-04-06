#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be measured
 *
 * Return: 0 (On Success)
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
