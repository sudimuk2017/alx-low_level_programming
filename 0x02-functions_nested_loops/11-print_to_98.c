#include "main.h"
#include <stdio.h>
/**
 * main - function that prints all natural numbers
 * 
 * Return: none
 */
void print_to_98(int a)
{
	if (a < 98)
	{
		for (a = a; a < 98; a++)
			printf("%d, ", a);
		printf("%d\n", 98);
	}
	else
	{
		for (a = a; a > 98; a--)
			printf("%d, ", a);
		printf("%d\n", 98);
	}
}
