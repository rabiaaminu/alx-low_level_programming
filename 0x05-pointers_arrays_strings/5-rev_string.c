#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Return: Always void.
 */
void rev_string(char *s)
{
    int i, j;
    char c;

    i = 0;
    while (s[i] != '\0')
        i++;
    i--;
    for (j = 0; j < i; j++, i--)
    {
        c = s[j];
        s[j] = s[i];
        s[i] = c;
    }
}

