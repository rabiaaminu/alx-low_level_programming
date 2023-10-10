#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 0;
int num;
for (num = 0; num < 1024; num++)
{
if (num % 3 == 0 || num % 5 == 0)
{
sum += num;
}
}
while (sum > 0)
{
putchar((sum % 10) + '0');
sum /= 10;
}
putchar('\n');
return (0);
}

