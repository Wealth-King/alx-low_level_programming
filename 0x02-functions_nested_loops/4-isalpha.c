#include "main.h"

/**
 * _isaplha _ Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for a;pahbetic character or 0 for anything else
 */

int _isalpha(int c)

{ 

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
