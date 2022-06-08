#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i=0;

	for (i = 0 ; i < 9 ; i++)
		_putchar(putchar[i]);
	_putchar('\n');
	return (0);
}
