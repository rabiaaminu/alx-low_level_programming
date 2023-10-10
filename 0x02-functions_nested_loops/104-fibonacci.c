#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned int a = 1, b = 2, c;
int count = 2;
putchar('1');
putchar(',');
putchar(' ');
putchar('2');
while (count < 98)
{
c = a + b;
if (count < 97)
{
putchar(',');
putchar(' ');
}
count++;
putchar(' ');
if (c > 9)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
}
else
{
putchar(c + '0');
}
a = b;
b = c;
}
putchar('\n');
return (0);
}

