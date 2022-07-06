#include "main.h"
/**
 * main - prints _putchar
 *  
 * return: zero 
 */
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	
	return (0);
}
