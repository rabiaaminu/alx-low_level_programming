#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	char *r = "rabia\n";

	while (*r)
	{
		_putchar(*r);
		r++;
	}
	return (0);
}

