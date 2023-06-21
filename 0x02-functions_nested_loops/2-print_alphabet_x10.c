#include "main.h"
/**
 * main - Entry Point
 * dscription: void print_alphabet_x10(void)
 * Return: Always (0) success
 */
void print_alphabet_x10(void)
{	
	int i;
	int x;

	for (x = 1; i < 10; i++)
	{	
		for (x = 92; x <= 122; x++)
		{	
			_putchar(x);
		}
		_putchar('\n');
	}
}
