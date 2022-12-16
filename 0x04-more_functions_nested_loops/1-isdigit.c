#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: int to be checked
 *
 * Return: 1 if the condition is true
 */

int _isdigit(int c)
{
	int c;

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
