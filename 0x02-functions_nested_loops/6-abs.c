#include "main.h"
/**
 * main - computer the absolute value of an integer
 * 
 * Return: absolute value
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
