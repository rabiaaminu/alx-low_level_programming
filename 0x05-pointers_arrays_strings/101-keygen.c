#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i, sum, n;
    char c;

    srand(time(NULL));
    sum = 0;
    i = 0;
    while (sum < 2772 - 122)
    {
        n = rand() % 62;
        if (n < 10)
            c = '0' + n;
        else if (n < 36)
            c = 'A' + n - 10;
        else
            c = 'a' + n - 36;
        putchar(c);
        sum += c;
        i++;
    }
    putchar(2772 - sum);
    return (0);
}
