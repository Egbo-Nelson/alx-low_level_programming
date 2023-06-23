#include "main.h"
/**
 * islower - shows 1 if input is a
 * lowercase character. Another case show
 * 0
 * @c: the character is ASCII code
 * Return: 1 for lowercase and 0 for rest
 */
int _islower(int c) {	
	if (c >= 97 && c <= 122)
	{	
		return (1);
	}
	else
	{	
		return (0);
	}
	_putchar('\n');
}
