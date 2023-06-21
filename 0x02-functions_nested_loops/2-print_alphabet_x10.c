#include "main.h"
/**
 * main - Entry Point
 * Description: function that prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always (0) success
 */
void print_alphabet_x10(void)
{	
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{	
		for (x = 'a'; x <= 'z'; x++)
		{	
			_putchar(x);
		}
		_putchar('\n');
	}
}
