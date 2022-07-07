#include "main.h"
/**
 * main - function that check for alphabetic character
 * 
 * Return: one and zero
 */
int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);

}
