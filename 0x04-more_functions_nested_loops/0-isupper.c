#include "main.h"

/**
 * _isupper: checking if a character is upper
 *
 * Return: 1 if the character is right and else
 * if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return (0);
	}

}
