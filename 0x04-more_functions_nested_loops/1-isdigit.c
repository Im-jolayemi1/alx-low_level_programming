#include "main.h"

/**
 * _isdigit - check for a digit
 * @x: int to be checked
 *
 * Return: 1 if the condition is true
 */

int _isdigit(int x)
{
	int x;

	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
