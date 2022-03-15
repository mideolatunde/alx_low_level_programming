#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if the charactr is an alphabet character.
 * Return: 1 if letter uppercase or lowercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

