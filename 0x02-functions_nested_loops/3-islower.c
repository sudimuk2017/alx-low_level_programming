#include "main.h"
/**
 * main - check for lowercase alphabets
 * 
 * Return: one and zero
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);

}
