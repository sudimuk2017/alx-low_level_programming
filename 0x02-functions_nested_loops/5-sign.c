#include "main.h"
/**
 * main - print the sign of a number
 * 
 * Return: one, zero and negative one
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
